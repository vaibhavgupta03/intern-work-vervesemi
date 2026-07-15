#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <memory>
#include <random>
#include <string>

#include "Vaxil_star_top.h"
#include "verilated.h"
#include "verilated_cov.h"
#if VM_TRACE
#include "verilated_vcd_c.h"
#endif

static const int NM = 2;
static const int NSLV = 16;
static const uint32_t RESP_OKAY = 0, RESP_SLVERR = 2, RESP_DECERR = 3;

// ------------------------------ reference model ------------------------------
struct RefModel {
    uint32_t regs[NSLV][16];  

    RefModel() { reset(); }
    void reset() {
        for (int s = 0; s < NSLV; s++) {
            regs[s][0] = 0xA5A50000u | ((s >> 2) << 4) | (s & 3);
            for (int r = 1; r < 16; r++) regs[s][r] = 0;
        }
    }
    static bool hub_decerr(uint32_t addr) { return (addr >> 12) != 0; }
    // predicted write response; applies side effect on commit
    uint32_t write(uint32_t addr, uint32_t data, uint8_t strb) {
        if (hub_decerr(addr)) return RESP_DECERR;
        uint32_t off = addr & 0xFF;
        int s = (addr >> 8) & 0xF;
        if (off & 0x80) return RESP_DECERR;             
        if (off & 0x40) return RESP_SLVERR;             
        int r = (off >> 2) & 0xF;
        if (r == 0) return RESP_SLVERR;                 
        for (int b = 0; b < 4; b++)
            if (strb & (1 << b)) {
                regs[s][r] = (regs[s][r] & ~(0xFFu << (8 * b))) |
                             (data & (0xFFu << (8 * b)));
            }
        return RESP_OKAY;
    }
    // predicted read response + data
    uint32_t read(uint32_t addr, uint32_t& data) const {
        if (hub_decerr(addr)) { data = 0xDEADDEAD; return RESP_DECERR; }
        uint32_t off = addr & 0xFF;
        int s = (addr >> 8) & 0xF;
        if (off & 0x80) { data = 0xDEC0DE00; return RESP_DECERR; }
        if (off & 0x40) { data = 0xBAD0BAD0; return RESP_SLVERR; }
        data = regs[s][(off >> 2) & 0xF];
        return RESP_OKAY;
    }
};

// ------------------------------ functional coverage --------------------------

struct FuncCov {
    VerilatedCovContext* covp = nullptr;
    uint32_t wr_route[NM][NSLV] = {};
    uint32_t rd_route[NM][NSLV] = {};
    uint32_t b_resp[NM][3] = {};      
    uint32_t r_resp[NM][3] = {};
    uint32_t wstrb_bin[NM][16] = {};
    uint32_t contend_wr = 0, contend_rd = 0;
    uint32_t par_wr_wr = 0, par_rd_rd = 0;
    uint32_t par_wr_rd_same[NM] = {}, par_wr_rd_cross = 0, par_rd_wr_cross = 0;
    uint32_t w_before_aw[NM] = {}, aw_w_same_cyc[NM] = {};
    uint32_t bp_b[NM] = {}, bp_r[NM] = {};
    uint32_t b2b_wr[NM] = {}, b2b_rd[NM] = {};
    bool prev_bhs[NM] = {}, prev_rhs[NM] = {};

    static const char* nm(const char* fmt, int a = -1, int b = -1) {
        static char bufs[512][64];
        static int n = 0;
        char* s = bufs[n++ % 512];
        snprintf(s, 64, fmt, a, b);
        return s;
    }
    void reg_all(VerilatedCovContext* cp) {
        covp = cp;
        const char* page = "v_user/tb_func";
        for (int m = 0; m < NM; m++) {
            for (int s = 0; s < NSLV; s++) {
                VL_COVER_INSERT(covp, nm("route_wr_m%d_s%d", m, s), &wr_route[m][s], "page", page, "per_instance", "1");
                VL_COVER_INSERT(covp, nm("route_rd_m%d_s%d", m, s), &rd_route[m][s], "page", page, "per_instance", "1");
            }
            const char* rn[3] = {"okay", "slverr", "decerr"};
            for (int r = 0; r < 3; r++) {
                VL_COVER_INSERT(covp, nm((std::string("bresp_") + rn[r] + "_m%d").c_str(), m), &b_resp[m][r], "page", page, "per_instance", "1");
                VL_COVER_INSERT(covp, nm((std::string("rresp_") + rn[r] + "_m%d").c_str(), m), &r_resp[m][r], "page", page, "per_instance", "1");
            }
            for (int v = 0; v < 16; v++)
                VL_COVER_INSERT(covp, nm("wstrb_m%d_val%d", m, v), &wstrb_bin[m][v], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("par_wr_rd_same_m%d", m), &par_wr_rd_same[m], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("w_before_aw_m%d", m), &w_before_aw[m], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("aw_w_same_cycle_m%d", m), &aw_w_same_cyc[m], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("bvalid_stall_m%d", m), &bp_b[m], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("rvalid_stall_m%d", m), &bp_r[m], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("back2back_wr_m%d", m), &b2b_wr[m], "page", page, "per_instance", "1");
            VL_COVER_INSERT(covp, nm("back2back_rd_m%d", m), &b2b_rd[m], "page", page, "per_instance", "1");
        }
        VL_COVER_INSERT(covp, "contention_wr_same_conc", &contend_wr, "page", page, "per_instance", "1");
        VL_COVER_INSERT(covp, "contention_rd_same_conc", &contend_rd, "page", page, "per_instance", "1");
        VL_COVER_INSERT(covp, "parallel_wr_wr", &par_wr_wr, "page", page, "per_instance", "1");
        VL_COVER_INSERT(covp, "parallel_rd_rd", &par_rd_rd, "page", page, "per_instance", "1");
        VL_COVER_INSERT(covp, "parallel_wr_rd_cross", &par_wr_rd_cross, "page", page, "per_instance", "1");
        VL_COVER_INSERT(covp, "parallel_rd_wr_cross", &par_rd_wr_cross, "page", page, "per_instance", "1");
    }
    static int resp_bin(uint32_t r) { return r == 0 ? 0 : (r == 2 ? 1 : 2); }
    void on_write_done(int m, uint32_t addr, uint32_t bresp) {
        if ((addr >> 12) == 0) wr_route[m][(addr >> 8) & 0xF]++;
        b_resp[m][resp_bin(bresp)]++;
    }
    void on_read_done(int m, uint32_t addr, uint32_t rresp) {
        if ((addr >> 12) == 0) rd_route[m][(addr >> 8) & 0xF]++;
        r_resp[m][resp_bin(rresp)]++;
    }
    // called with port values sampled just before the posedge
    void per_cycle(Vaxil_star_top* d) {
        auto inr = [&](uint32_t a) { return (a >> 12) == 0; };
        bool awhs[NM], arhs[NM], whs[NM], bhs[NM], rhs[NM];
        for (int m = 0; m < NM; m++) {
            awhs[m] = d->s_awvalid[m] && d->s_awready[m];
            arhs[m] = d->s_arvalid[m] && d->s_arready[m];
            whs[m] = d->s_wvalid[m] && d->s_wready[m];
            bhs[m] = d->s_bvalid[m] && d->s_bready[m];
            rhs[m] = d->s_rvalid[m] && d->s_rready[m];
            if (whs[m]) wstrb_bin[m][d->s_wstrb[m] & 0xF]++;
            if (awhs[m] && whs[m]) aw_w_same_cyc[m]++;
            if (d->s_wvalid[m] && !d->s_awvalid[m]) w_before_aw[m]++;
            if (d->s_bvalid[m] && !d->s_bready[m]) bp_b[m]++;
            if (d->s_rvalid[m] && !d->s_rready[m]) bp_r[m]++;
            if (awhs[m] && arhs[m]) par_wr_rd_same[m]++;
            if (d->s_awvalid[m] && prev_bhs[m]) b2b_wr[m]++;
            if (d->s_arvalid[m] && prev_rhs[m]) b2b_rd[m]++;
        }
        if (d->s_awvalid[0] && d->s_awvalid[1] && inr(d->s_awaddr[0]) && inr(d->s_awaddr[1]) &&
            ((d->s_awaddr[0] >> 10) & 3) == ((d->s_awaddr[1] >> 10) & 3)) contend_wr++;
        if (d->s_arvalid[0] && d->s_arvalid[1] && inr(d->s_araddr[0]) && inr(d->s_araddr[1]) &&
            ((d->s_araddr[0] >> 10) & 3) == ((d->s_araddr[1] >> 10) & 3)) contend_rd++;
        if (awhs[0] && awhs[1]) par_wr_wr++;
        if (arhs[0] && arhs[1]) par_rd_rd++;
        if (awhs[0] && arhs[1]) par_wr_rd_cross++;
        if (arhs[0] && awhs[1]) par_rd_wr_cross++;
        for (int m = 0; m < NM; m++) { prev_bhs[m] = bhs[m]; prev_rhs[m] = rhs[m]; }
    }
};

// ------------------------------ transactions --------------------------------
struct WrTxn {
    uint32_t addr = 0, data = 0;
    uint8_t strb = 0xF, prot = 0;
    int aw_delay = 0, w_delay = 0, b_delay = 0;  
};
struct RdTxn {
    uint32_t addr = 0;
    uint8_t prot = 0;
    int ar_delay = 0, r_delay = 0;
};

// ------------------------------ master BFM ----------------------------------
struct MasterBfm {
    int idx = 0;
    Vaxil_star_top* dut = nullptr;
    RefModel* model = nullptr;
    FuncCov* fc = nullptr;

    std::deque<WrTxn> wq;
    std::deque<RdTxn> rq;

    enum { W_IDLE, W_RUN, W_RESP } wst = W_IDLE;
    WrTxn wcur;
    bool aw_done = false, w_done = false;
    int wgap = 0;

    enum { R_IDLE, R_RUN, R_RESP } rst = R_IDLE;
    RdTxn rcur;
    bool ar_done = false;
    int rgap = 0;

    bool s_awhs = false, s_whs = false, s_bhs = false, s_arhs = false, s_rhs = false;
    uint32_t s_bresp = 0, s_rresp = 0, s_rdata = 0;

    uint64_t checks = 0, errors = 0, wr_done_cnt = 0, rd_done_cnt = 0;

    static bool is_mapped_reg(uint32_t addr) {
        return (addr >> 12) == 0 && (addr & 0xC0) == 0 && (addr & 0x3C) != 0;
    }
    static bool conflict(uint32_t a, uint32_t b) {
        return is_mapped_reg(a) && is_mapped_reg(b) &&
               (a & 0xFFC) == (b & 0xFFC);
    }
    bool write_inflight_to(uint32_t addr) const {  
        return wst != W_IDLE && (wcur.addr & 0xFFFFFFFC) == (addr & 0xFFFFFFFC);
    }
    bool busy() const { return wst != W_IDLE || rst != R_IDLE || !wq.empty() || !rq.empty(); }

    
    void sample() {
        s_awhs = dut->s_awvalid[idx] && dut->s_awready[idx];
        s_whs  = dut->s_wvalid[idx] && dut->s_wready[idx];
        s_bhs  = dut->s_bvalid[idx] && dut->s_bready[idx];
        s_arhs = dut->s_arvalid[idx] && dut->s_arready[idx];
        s_rhs  = dut->s_rvalid[idx] && dut->s_rready[idx];
        s_bresp = dut->s_bresp[idx];
        s_rresp = dut->s_rresp[idx];
        s_rdata = dut->s_rdata[idx];
    }

    // ---- write engine helpers ----
    void w_drive() {
        if (!aw_done) {
            if (wcur.aw_delay > 0) wcur.aw_delay--;
            else if (!dut->s_awvalid[idx]) {
                dut->s_awvalid[idx] = 1;
                dut->s_awaddr[idx] = wcur.addr;
                dut->s_awprot[idx] = wcur.prot;
            }
        }
        if (!w_done) {
            if (wcur.w_delay > 0) wcur.w_delay--;
            else if (!dut->s_wvalid[idx]) {
                dut->s_wvalid[idx] = 1;
                dut->s_wdata[idx] = wcur.data;
                dut->s_wstrb[idx] = wcur.strb;
            }
        }
        if (aw_done && w_done) wst = W_RESP;
    }
    void w_try_start() {  
        if (wgap > 0) { wgap--; return; }
        if (wq.empty()) return;
        if (rst != R_IDLE && conflict(wq.front().addr, rcur.addr)) return;
        wcur = wq.front(); wq.pop_front();
        aw_done = w_done = false;
        wst = W_RUN;
        w_drive();
    }
    // ---- read engine helpers ----
    void r_drive() {
        if (!ar_done) {
            if (rcur.ar_delay > 0) rcur.ar_delay--;
            else if (!dut->s_arvalid[idx]) {
                dut->s_arvalid[idx] = 1;
                dut->s_araddr[idx] = rcur.addr;
                dut->s_arprot[idx] = rcur.prot;
            }
        } else {
            rst = R_RESP;
        }
    }
    void r_try_start() {
        if (rgap > 0) { rgap--; return; }
        if (rq.empty()) return;
        if (wst != W_IDLE && conflict(rq.front().addr, wcur.addr)) return;
        rcur = rq.front(); rq.pop_front();
        ar_done = false;
        rst = R_RUN;
        r_drive();
    }

    // Update engine state after the posedge; drive inputs for the next cycle.
    void update() {
        // ---------------- write engine ----------------
        if (s_awhs) { dut->s_awvalid[idx] = 0; aw_done = true; }
        if (s_whs)  { dut->s_wvalid[idx] = 0; w_done = true; }

        switch (wst) {
        case W_IDLE:
            w_try_start();
            break;
        case W_RUN:
            w_drive();
            break;
        case W_RESP:
            if (s_bhs) {
                dut->s_bready[idx] = 0;
                uint32_t exp = model->write(wcur.addr, wcur.data, wcur.strb);
                checks++;
                if (s_bresp != exp) {
                    errors++;
                    printf("[M%d] BRESP mismatch @%08x: got %u exp %u\n",
                           idx, wcur.addr, s_bresp, exp);
                }
                wr_done_cnt++;
                if (fc) fc->on_write_done(idx, wcur.addr, s_bresp);
                wst = W_IDLE;
                w_try_start();          
            } else if (dut->s_bvalid[idx]) {
                if (wcur.b_delay > 0) { wcur.b_delay--; dut->s_bready[idx] = 0; }
                else dut->s_bready[idx] = 1;
            }
            break;
        }

        // ---------------- read engine ----------------
        if (s_arhs) { dut->s_arvalid[idx] = 0; ar_done = true; }

        switch (rst) {
        case R_IDLE:
            r_try_start();
            break;
        case R_RUN:
            r_drive();
            break;
        case R_RESP:
            if (s_rhs) {
                dut->s_rready[idx] = 0;
                uint32_t expd = 0;
                uint32_t expr_ = model->read(rcur.addr, expd);
                checks++;
                if (s_rresp != expr_ || s_rdata != expd) {
                    errors++;
                    printf("[M%d] READ mismatch @%08x: got resp %u data %08x, exp resp %u data %08x\n",
                           idx, rcur.addr, s_rresp, s_rdata, expr_, expd);
                }
                rd_done_cnt++;
                if (fc) fc->on_read_done(idx, rcur.addr, s_rresp);
                rst = R_IDLE;
                r_try_start();          
            } else if (dut->s_rvalid[idx]) {
                if (rcur.r_delay > 0) { rcur.r_delay--; dut->s_rready[idx] = 0; }
                else dut->s_rready[idx] = 1;
            }
            break;
        }
    }
};

// ------------------------------ harness -------------------------------------
struct Harness {
    std::unique_ptr<VerilatedContext> ctx;
    std::unique_ptr<Vaxil_star_top> dut;
#if VM_TRACE
    std::unique_ptr<VerilatedVcdC> tfp;
#endif
    MasterBfm m[NM];
    RefModel model;
    FuncCov fc;
    uint64_t cycles = 0;
    std::mt19937 rng{12345};

    Harness(int argc, char** argv) {
        ctx = std::make_unique<VerilatedContext>();
        ctx->commandArgs(argc, argv);
        dut = std::make_unique<Vaxil_star_top>(ctx.get());
#if VM_TRACE
        if (ctx->commandArgsPlusMatch("trace")[0]) {
            ctx->traceEverOn(true);
            tfp = std::make_unique<VerilatedVcdC>();
            dut->trace(tfp.get(), 99);
            tfp->open("logs/waves.vcd");
        }
#endif
#if VM_COVERAGE
        fc.reg_all(ctx->coveragep());
#endif
        for (int i = 0; i < NM; i++) {
            m[i].idx = i;
            m[i].dut = dut.get();
            m[i].model = &model;
            m[i].fc = &fc;
        }
    }

    uint32_t rnd() { return rng(); }

    void tick() {
        dut->clk = 0;
        dut->eval();
#if VM_TRACE
        if (tfp) tfp->dump(2 * cycles);
#endif
        for (auto& b : m) b.sample();
        if (dut->rst_n) fc.per_cycle(dut.get());
        dut->clk = 1;
        dut->eval();
#if VM_TRACE
        if (tfp) tfp->dump(2 * cycles + 1);
#endif
        for (auto& b : m) b.update();
        cycles++;
    }

    void reset(int n = 5) {
        dut->rst_n = 0;
        for (int i = 0; i < NM; i++) {
            dut->s_awvalid[i] = dut->s_wvalid[i] = dut->s_arvalid[i] = 0;
            dut->s_bready[i] = dut->s_rready[i] = 0;
            dut->s_awaddr[i] = dut->s_araddr[i] = 0;
            dut->s_wdata[i] = 0; dut->s_wstrb[i] = 0;
            dut->s_awprot[i] = dut->s_arprot[i] = 0;
        }
        for (int i = 0; i < n; i++) tick();
        dut->rst_n = 1;
        tick();
    }

    // run until both masters drained (with timeout)
    bool drain(uint64_t max_cycles = 4000000) {
        uint64_t start = cycles;
        while (m[0].busy() || m[1].busy()) {
            tick();
            if (cycles - start > max_cycles) {
                printf("TIMEOUT draining at cycle %lu (m0 %d/%d q%zu/%zu, m1 %d/%d q%zu/%zu)\n",
                       (unsigned long)cycles, m[0].wst, m[0].rst, m[0].wq.size(), m[0].rq.size(),
                       m[1].wst, m[1].rst, m[1].wq.size(), m[1].rq.size());
                return false;
            }
        }
        return true;
    }

    static uint32_t slave_addr(int s, int reg) {
        return (uint32_t(s & 0xF) << 8) | (uint32_t(reg & 0xF) << 2);
    }
};

// ------------------------------ phases --------------------------------------
static void phase1_full_cross(Harness& h) {
    for (int mi = 0; mi < NM; mi++) {
        for (int s = 0; s < NSLV; s++) {
            for (int r = 1; r < 16; r++) {
                uint32_t a = Harness::slave_addr(s, r);
                h.m[mi].wq.push_back({a, 0xFFFFFFFFu, 0xF, 0, 0, 0, 0});
                h.m[mi].wq.push_back({a, 0x00000000u, 0xF, 0, 0, 0, 0});
                h.m[mi].wq.push_back({a, h.rnd(), 0xF, 0, 0, 0, 0});
                h.m[mi].rq.push_back({a, 0, 0, 0});
            }
            h.m[mi].rq.push_back({Harness::slave_addr(s, 0), 0, 0, 0});  
        }
        if (!h.drain()) exit(2);  
    }
    printf("P1 full-cross done       @ cycle %lu\n", (unsigned long)h.cycles);
}

static void phase2_errors(Harness& h) {
    for (int mi = 0; mi < NM; mi++) {
        
        for (int b = 12; b < 32; b++) {
            uint32_t a = (1u << b) | Harness::slave_addr(h.rnd() % NSLV, h.rnd() % 16);
            h.m[mi].wq.push_back({a, h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[mi].rq.push_back({a, 0, 0, 0});
        }
        
        for (int s = 0; s < NSLV; s++) {
            uint32_t base = uint32_t(s) << 8;
            h.m[mi].wq.push_back({base | 0x40, h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[mi].wq.push_back({base | 0x7C, h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[mi].wq.push_back({base | 0x80, h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[mi].wq.push_back({base | 0xFC, h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[mi].rq.push_back({base | 0x44, 0, 0, 0});
            h.m[mi].rq.push_back({base | 0xF8, 0, 0, 0});
            h.m[mi].wq.push_back({base | 0x00, h.rnd(), 0xF, 0, 0, 0, 0});
        }
    }
    if (!h.drain()) exit(2);
    printf("P2 error stimulus done   @ cycle %lu\n", (unsigned long)h.cycles);
}

static void phase3_ordering(Harness& h) {
    for (int mi = 0; mi < NM; mi++) {
        h.m[mi].wq.push_back({Harness::slave_addr(1, 2), 0x11223344, 0x1, 3, 0, 0, 0});
        h.m[mi].wq.push_back({Harness::slave_addr(2, 3), 0x55667788, 0x2, 0, 3, 0, 0});
        h.m[mi].wq.push_back({Harness::slave_addr(3, 4), 0x99AABBCC, 0x4, 0, 0, 0, 0});
        h.m[mi].wq.push_back({Harness::slave_addr(4, 5), 0xDDEEFF00, 0x8, 1, 2, 0, 0});
        h.m[mi].wq.push_back({Harness::slave_addr(5, 6), 0x0F0F0F0F, 0x0, 0, 0, 0, 0}); // strb=0
        h.m[mi].wq.push_back({Harness::slave_addr(6, 7), 0xF0F0F0F0, 0x5, 0, 0, 0, 0}); // "other"
        
        h.m[mi].wq.push_back({Harness::slave_addr(7, 8), 0xCAFEBABE, 0xF, 0, 0, 4, 0});
        h.m[mi].rq.push_back({Harness::slave_addr(7, 8), 0, 0, 4});
        
        for (int i = 1; i <= 7; i++) h.m[mi].rq.push_back({Harness::slave_addr(i, i + 1), 0, 0, 0});
    }
    if (!h.drain()) exit(2);
    printf("P3 ordering/backpressure @ cycle %lu\n", (unsigned long)h.cycles);
}

static void phase4_contention(Harness& h) {
    
    for (int rep = 0; rep < 4; rep++) {
        for (int s = 0; s < NSLV; s++) {
            h.m[0].wq.push_back({Harness::slave_addr(s, 1 + (rep & 3)), h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[1].wq.push_back({Harness::slave_addr(s, 9 + (rep & 3)), h.rnd(), 0xF, 0, 0, 0, 0});
            h.m[0].rq.push_back({Harness::slave_addr(s, 5), 0, 0, 0});
            h.m[1].rq.push_back({Harness::slave_addr(s, 13), 0, 0, 0});
        }
        if (!h.drain()) exit(2);  
    }
    printf("P4 contention done       @ cycle %lu\n", (unsigned long)h.cycles);
}

static void phase5_random(Harness& h, int txns_per_engine) {

    auto rnd_wr = [&](int mi) -> WrTxn {
        WrTxn t;
        uint32_t roll = h.rnd() % 100;
        int s = int(h.rnd() % NSLV);
        if (roll < 80) {  
            int r = (mi == 0) ? 1 + int(h.rnd() % 7) : 8 + int(h.rnd() % 8);
            t.addr = Harness::slave_addr(s, r) | (h.rnd() & 3);  
        } else if (roll < 87) {
            t.addr = (uint32_t(s) << 8) | 0x40 | (h.rnd() & 0x3F);   
        } else if (roll < 92) {
            t.addr = (uint32_t(s) << 8) | 0x80 | (h.rnd() & 0x7F);   
        } else if (roll < 96) {
            uint32_t up = h.rnd() & 0xFFFFF000u;
            if (!up) up = 0x1000;
            t.addr = up | (h.rnd() & 0xFFF);                         
        } else {
            t.addr = Harness::slave_addr(s, 0);                    
        }
        uint32_t d = h.rnd() % 4;
        t.data = (d == 0) ? h.rnd() : (d == 1) ? 0xFFFFFFFFu
               : (d == 2) ? 0u : (1u << (h.rnd() % 32));
        t.strb = uint8_t(h.rnd() & 0xF);
        t.prot = uint8_t(h.rnd() & 0x7);
        t.aw_delay = int(h.rnd() % 3);
        t.w_delay = int(h.rnd() % 3);
        t.b_delay = int(h.rnd() % 3);
        return t;
    };
    auto rnd_rd = [&](int mi) -> RdTxn {
        RdTxn t;
        uint32_t roll = h.rnd() % 100;
        int s = int(h.rnd() % NSLV);
        if (roll < 70) {
            int r = (mi == 0) ? 1 + int(h.rnd() % 7) : 8 + int(h.rnd() % 8);
            t.addr = Harness::slave_addr(s, r) | (h.rnd() & 3);
        } else if (roll < 80) {
            t.addr = Harness::slave_addr(s, 0);                      // ID
        } else if (roll < 88) {
            t.addr = (uint32_t(s) << 8) | 0x40 | (h.rnd() & 0x3F);
        } else if (roll < 94) {
            t.addr = (uint32_t(s) << 8) | 0x80 | (h.rnd() & 0x7F);
        } else {
            uint32_t up = h.rnd() & 0xFFFFF000u;
            if (!up) up = 0x2000;
            t.addr = up | (h.rnd() & 0xFFF);
        }
        t.prot = uint8_t(h.rnd() & 0x7);
        t.ar_delay = int(h.rnd() % 3);
        t.r_delay = int(h.rnd() % 3);
        return t;
    };

    int issued[NM] = {0, 0};
    while (issued[0] < txns_per_engine || issued[1] < txns_per_engine ||
           h.m[0].busy() || h.m[1].busy()) {
        for (int mi = 0; mi < NM; mi++) {
            if (issued[mi] < txns_per_engine && h.m[mi].wq.size() < 2) {
                WrTxn wt = rnd_wr(mi);
                h.m[mi].wq.push_back(wt);
                RdTxn rt = rnd_rd(mi);
                
                while (h.m[mi].write_inflight_to(rt.addr)) rt = rnd_rd(mi);
                h.m[mi].rq.push_back(rt);
                h.m[mi].wgap = int(h.rnd() % 3);
                h.m[mi].rgap = int(h.rnd() % 3);
                issued[mi]++;
            }
        }
        h.tick();
        if (h.cycles > 10000000ull) { printf("TIMEOUT in random phase\n"); exit(2); }
    }
    printf("P5 random done (%d/engine) @ cycle %lu\n", txns_per_engine,
           (unsigned long)h.cycles);
}

// ------------------------------ main -----------------------------------------
int main(int argc, char** argv) {
    Harness h(argc, argv);

    h.reset();
    phase1_full_cross(h);
    phase2_errors(h);
    phase3_ordering(h);
    phase4_contention(h);
    phase5_random(h, 4000);
    for (int i = 0; i < 10; i++) h.tick();  

    uint64_t checks = 0, errors = 0, wr = 0, rd = 0;
    for (auto& b : h.m) {
        checks += b.checks; errors += b.errors;
        wr += b.wr_done_cnt; rd += b.rd_done_cnt;
    }
    printf("==============================================\n");
    printf(" transactions : %lu writes, %lu reads\n", (unsigned long)wr, (unsigned long)rd);
    printf(" checks       : %lu, mismatches: %lu\n", (unsigned long)checks, (unsigned long)errors);
    printf(" result       : %s\n", errors ? "*** FAIL ***" : "PASS");
    printf("==============================================\n");

    h.dut->final();
#if VM_TRACE
    if (h.tfp) h.tfp->close();
#endif
#if VM_COVERAGE
    h.ctx->coveragep()->write("logs/coverage.dat");
#endif
    return errors ? 1 : 0;
}
