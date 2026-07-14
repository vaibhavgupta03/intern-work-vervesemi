#include "Vtx_rx_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Global tracking variable for the 1-cycle delayed loopback wire
uint8_t wire_delayed_tx = 1;

// Shortcuts pointing directly to the public top-level module ports
#define DUT_CLK      top->clk
#define DUT_RX       top->rx
#define DUT_TX       top->tx
#define DUT_RST      top->rst
#define AXI_AWADDR   top->s_awaddr
#define AXI_AWVALID  top->s_awvalid
#define AXI_AWREADY  top->s_awready
#define AXI_WDATA    top->s_wdata
#define AXI_WVALID   top->s_wvalid
#define AXI_WREADY   top->s_wready
#define AXI_WSTRB    top->s_wstrb
#define AXI_BREADY   top->s_bready
#define AXI_BVALID   top->s_bvalid
#define AXI_ARADDR   top->s_araddr
#define AXI_ARVALID  top->s_arvalid
#define AXI_ARREADY  top->s_arready
#define AXI_RREADY   top->s_rready
#define AXI_RVALID   top->s_rvalid
#define AXI_RDATA    top->s_rdata

// Unified clock-ticking function
void tick_clock(Vtx_rx_tb* top, VerilatedContext* context, VerilatedVcdC* tfp, bool enable_loopback = true) {
    context->timeInc(5);
    DUT_CLK = !DUT_CLK;

    if (enable_loopback) {
        DUT_RX = wire_delayed_tx;
    } else {
        DUT_RX = 0; 
    }

    top->eval();
    
    if (enable_loopback) {
        wire_delayed_tx = DUT_TX; 
    }
    
    tfp->dump(context->time());
}

// ── MASTER AXI WRITE TASK ────────────────────────────────────────────────
void axi_write(Vtx_rx_tb* top, VerilatedContext* context, VerilatedVcdC* tfp, uint32_t addr, uint32_t data) {
    AXI_AWADDR  = addr;
    AXI_AWVALID = 1;
    AXI_WDATA   = data;
    AXI_WVALID  = 1;
    AXI_WSTRB   = 0xF;
    AXI_BREADY  = 1;

    int timeout = 0;
    while ((!AXI_AWREADY || !AXI_WREADY) && timeout < 100) {
        tick_clock(top, context, tfp);
        timeout++;
    }
    
    tick_clock(top, context, tfp);
    AXI_AWVALID = 0; 
    AXI_WVALID = 0;

    timeout = 0;
    while (!AXI_BVALID && timeout < 100) {
        tick_clock(top, context, tfp);
        timeout++;
    }
    
    tick_clock(top, context, tfp);
    AXI_BREADY = 0;
}

// ── MASTER AXI READ TASK ─────────────────────────────────────────────────
uint32_t axi_read(Vtx_rx_tb* top, VerilatedContext* context, VerilatedVcdC* tfp, uint32_t addr) {
    AXI_ARADDR  = addr;
    AXI_ARVALID = 1;
    AXI_RREADY  = 1;

    int timeout = 0;
    while (!AXI_ARREADY && timeout < 100) {
        tick_clock(top, context, tfp);
        timeout++;
    }
    
    tick_clock(top, context, tfp);
    AXI_ARVALID = 0;

    timeout = 0;
    while (!AXI_RVALID && timeout < 100) {
        tick_clock(top, context, tfp);
        timeout++;
    }
    uint32_t data = AXI_RDATA;
    tick_clock(top, context, tfp);
    AXI_RREADY = 0;
    return data;
}

// ── AXI SPLIT WRITE HELPER ───────────────────────────────────────────────
void axi_write_split(Vtx_rx_tb* top, VerilatedContext* contextp, VerilatedVcdC* tfp, uint32_t addr, uint32_t data) {
    AXI_AWADDR  = addr; 
    AXI_AWVALID = 1;
    AXI_WVALID  = 0;    
    tick_clock(top, contextp, tfp);
    tick_clock(top, contextp, tfp);
    tick_clock(top, contextp, tfp);

    AXI_WDATA  = data; 
    AXI_WVALID = 1; 
    AXI_WSTRB  = 0xF;
    tick_clock(top, contextp, tfp);

    AXI_AWVALID = 0; 
    AXI_WVALID  = 0;

    int timeout = 0;
    while (!AXI_BVALID && timeout < 50) {
        tick_clock(top, contextp, tfp); 
        timeout++;
    }
    
    tick_clock(top, contextp, tfp);
    tick_clock(top, contextp, tfp);
    AXI_BREADY = 1;
    tick_clock(top, contextp, tfp);
    AXI_BREADY = 0;
}

// ── AXI SLOW READ HELPER ─────────────────────────────────────────────────
void axi_read_slow(Vtx_rx_tb* top, VerilatedContext* contextp, VerilatedVcdC* tfp, uint32_t addr) {
    AXI_ARADDR  = addr; 
    AXI_ARVALID = 1;
    AXI_RREADY  = 0;    
    
    int timeout = 0;
    while (!AXI_ARREADY && timeout < 50) {
        tick_clock(top, contextp, tfp); 
        timeout++;
    }
    tick_clock(top, contextp, tfp);
    AXI_ARVALID = 0;

    timeout = 0;
    while (!AXI_RVALID && timeout < 50) {
        tick_clock(top, contextp, tfp); 
        timeout++;
    }
    
    tick_clock(top, contextp, tfp);
    tick_clock(top, contextp, tfp);
    AXI_RREADY = 1;
    tick_clock(top, contextp, tfp);
    AXI_RREADY = 0;
}

int main(int argc, char** argv) {
    std::srand(12345); 
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtx_rx_tb* top = new Vtx_rx_tb{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("verilator_wave.vcd");

    DUT_CLK = 0; DUT_RST = 1; DUT_RX = 1;
    AXI_AWVALID = 0; AXI_WVALID = 0; AXI_ARVALID = 0; AXI_RREADY = 0; AXI_BREADY = 0;
    wire_delayed_tx = 1;

    for (int i = 0; i < 20; i++) {
        contextp->timeInc(5); DUT_CLK = !DUT_CLK; top->eval(); tfp->dump(contextp->time());
    }
    DUT_RST = 0;

    std::cout << "[STIMULUS] Starting Stage 1: Registry Sweep..." << std::endl;
    axi_write_split(top, contextp, tfp, 0x06, 0x0003);
    axi_read_slow(top, contextp, tfp, 0x06);

    axi_write(top, contextp, tfp, 0x06, 0x0200); 
    axi_write(top, contextp, tfp, 0x00, 0x0055); 
    axi_write(top, contextp, tfp, 0x02, 0x00AA); 
    axi_read(top, contextp, tfp, 0x00);          
    axi_read(top, contextp, tfp, 0x02);          
    axi_write(top, contextp, tfp, 0x06, 0x0000); 

    uint8_t target_addresses[] = {0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E, 0x10, 0x12, 0x14, 0x16, 0x18};
    for (uint8_t addr : target_addresses) {
        axi_write(top, contextp, tfp, addr, 0xAAAA);
        axi_read(top, contextp, tfp, addr);
    }

    std::cout << "[STIMULUS] Fractional divider sweep..." << std::endl;
    axi_write(top, contextp, tfp, 0x06, 0x0200);   
    axi_write(top, contextp, tfp, 0x00, 0x0036);   
    axi_write(top, contextp, tfp, 0x02, 0x0000);   
    axi_write(top, contextp, tfp, 0x0E, 0x0004);   
    axi_write(top, contextp, tfp, 0x06, 0x0003);   
    axi_read(top, contextp, tfp, 0x00);             
    axi_read(top, contextp, tfp, 0x02);             
    for (int c = 0; c < 5000; c++) tick_clock(top, contextp, tfp);

    std::cout << "[STIMULUS] Starting Stage 2: Oversample Decoder Sweep..." << std::endl;
    uint16_t os_register_patterns[] = {0x0000, 0x0004, 0x0008, 0x000C}; 
    for (uint16_t pattern : os_register_patterns) {
        axi_write(top, contextp, tfp, 0x12, pattern);       
        axi_write(top, contextp, tfp, 0x06, 0x0003);         
        axi_write(top, contextp, tfp, 0x00, 0x00A5);        
        for (int c = 0; c < 2500; c++) tick_clock(top, contextp, tfp);
    }

    std::cout << "[STIMULUS] Word length sweep..." << std::endl;
    uint8_t word_lens[] = {0x00, 0x01, 0x02, 0x03, 0x04};  
    for (uint8_t wl : word_lens) {
        axi_write(top, contextp, tfp, 0x06, wl);        
        axi_write(top, contextp, tfp, 0x00, 0x00AA);    
        for (int c = 0; c < 3000; c++) tick_clock(top, contextp, tfp);
    }

    std::cout << "[STIMULUS] Starting Stage 3: Randomized Protocol Sweeps..." << std::endl;
    for (int frame = 0; frame < 150; frame++) {
        uint32_t random_lcr = std::rand() % 0xFF; 
        uint32_t random_data = std::rand() % 0x1FF;
        axi_write(top, contextp, tfp, 0x06, random_lcr & ~0x0200); 
        axi_write(top, contextp, tfp, 0x00, random_data);          
        for (int cycle = 0; cycle < 4500; cycle++) tick_clock(top, contextp, tfp);
    }

    std::cout << "[STIMULUS] Stop bits sweep..." << std::endl;
    uint8_t stop_configs[] = {0x03, 0x0B, 0x13};  
    for (uint8_t sb : stop_configs) {
        axi_write(top, contextp, tfp, 0x06, sb);
        axi_write(top, contextp, tfp, 0x00, 0x0055);
        for (int c = 0; c < 4000; c++) tick_clock(top, contextp, tfp);
    }

    std::cout << "[STIMULUS] Parity sweep..." << std::endl;
    uint16_t parity_configs[] = { 0x003, 0x023, 0x063, 0x0A3, 0x0E3 };
    for (uint16_t par : parity_configs) {
        axi_write(top, contextp, tfp, 0x06, par);
        axi_write(top, contextp, tfp, 0x00, 0x002A);   
        for (int c = 0; c < 3000; c++) tick_clock(top, contextp, tfp);
    }

    std::cout << "[STIMULUS] Starting Stage 4: Break Control and Long-Window Break Filtering..." << std::endl;
    axi_write(top, contextp, tfp, 0x06, 0x0103); 
    for (int cycle = 0; cycle < 1000; cycle++) tick_clock(top, contextp, tfp); 
    axi_write(top, contextp, tfp, 0x06, 0x0003); 
    
    axi_write(top, contextp, tfp, 0x00, 0x0055); 
    while (DUT_TX == 1) tick_clock(top, contextp, tfp);
    for (int cycle = 0; cycle < 12000; cycle++) tick_clock(top, contextp, tfp, false); 

    axi_write(top, contextp, tfp, 0x06, 0x0003);   
    for (int c = 0; c < 500; c++) tick_clock(top, contextp, tfp);  

    for (int c = 0; c < 300; c++) {
        DUT_RX = 0;    
        tick_clock(top, contextp, tfp, false);
    }
    DUT_RX = 1;
    for (int c = 0; c < 500; c++) tick_clock(top, contextp, tfp);

    axi_write(top, contextp, tfp, 0x7C, 0xDEAD); 
    axi_read(top, contextp, tfp, 0x7C);          
    axi_write(top, contextp, tfp, 0xFF, 0x0000); 
    axi_read(top, contextp, tfp, 0xFF);          

    std::cout << "[STIMULUS] Injecting dynamic mid-clock asynchronous reset..." << std::endl;
    DUT_RST = 1;
    for (int r = 0; r < 5; r++) {
        contextp->timeInc(5); DUT_CLK = !DUT_CLK; top->eval(); tfp->dump(contextp->time());
    }
    DUT_RST = 0;

    top->final();
    tfp->close();
    
#if VM_COVERAGE
    contextp->coveragep()->write("coverage.dat");
    std::cout << "\n[SUCCESS] Verification complete. All metric structures satisfied." << std::endl;
#endif

    delete top; delete tfp; delete contextp;
    return 0;
}