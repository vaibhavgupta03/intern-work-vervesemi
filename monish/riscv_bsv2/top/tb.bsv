
package tb;

import Types    :: *;
import Config   :: *;
import SoC      :: *;
import DebugCDC :: *;
import Clocks   :: *;
import StmtFSM  :: *;
import Vector   :: *;
import List     :: *;

// -------- Program selection (compile-time) --------
`ifdef TEST_FORWARD
  `define TESTNAME "forward"
`elsif TEST_LOADUSE
  `define TESTNAME "loaduse"
`elsif TEST_BRANCH
  `define TESTNAME "branch"
`elsif TEST_MULDIV
  `define TESTNAME "muldiv"
`elsif TEST_TRAP
  `define TESTNAME "trap"
`elsif TEST_ILLEGAL
  `define TESTNAME "illegal"
`else
  `define TESTNAME "alu"
`endif

// Return the selected program as a List of words (from verif/mem/asm.py).
function List#(Word) getProgram();
`ifdef TEST_FORWARD
  return List::cons(32'h00100093, List::cons(32'h00108113, List::cons(32'h00110193,
         List::cons(32'h00118213, List::cons(32'h004202b3, List::cons(32'h00502023,
         List::cons(32'h0000006f, Nil)))))));
`elsif TEST_LOADUSE
  return List::cons(32'h02a00093, List::cons(32'h04102023, List::cons(32'h04002103,
         List::cons(32'h00110193, List::cons(32'h00302023, List::cons(32'h0000006f, Nil))))));
`elsif TEST_BRANCH
  return List::cons(32'h00500093, List::cons(32'h00000113, List::cons(32'h00110133,
         List::cons(32'hfff08093, List::cons(32'hfe009ce3, List::cons(32'h00202023,
         List::cons(32'h0000006f, Nil)))))));
`elsif TEST_MULDIV
  return List::cons(32'h00600093, List::cons(32'h00700113, List::cons(32'h022081b3,
         List::cons(32'hffd00213, List::cons(32'h022202b3, List::cons(32'h01400313,
         List::cons(32'h00300393, List::cons(32'h02734433, List::cons(32'h027364b3,
         List::cons(32'h00500513, List::cons(32'h00000593, List::cons(32'h02b54633,
         List::cons(32'h02b566b3, List::cons(32'h00302023, List::cons(32'h00502223,
         List::cons(32'h00802423, List::cons(32'h00902623, List::cons(32'h00c02823,
         List::cons(32'h00d02a23, List::cons(32'h0000006f, Nil))))))))))))))))))));
`elsif TEST_TRAP
  return List::cons(32'h000000b7, List::cons(32'h01c08093, List::cons(32'h30509073,
         List::cons(32'h00000293, List::cons(32'h00000073, List::cons(32'h00502023,
         List::cons(32'h0000006f, List::cons(32'h342022f3, List::cons(32'h34102373,
         List::cons(32'h00430313, List::cons(32'h34131073, List::cons(32'h30200073,
         Nil))))))))))));
`elsif TEST_ILLEGAL
  return List::cons(32'h000000b7, List::cons(32'h01c08093, List::cons(32'h30509073,
         List::cons(32'h00000293, List::cons(32'hffffffff, List::cons(32'h00502023,
         List::cons(32'h0000006f, List::cons(32'h342022f3, List::cons(32'h34102373,
         List::cons(32'h00430313, List::cons(32'h34131073, List::cons(32'h30200073,
         Nil))))))))))));
`else
  return List::cons(32'h00500093, List::cons(32'h00700113, List::cons(32'h002081b3,
         List::cons(32'h40110233, List::cons(32'h0020f2b3, List::cons(32'h0020e333,
         List::cons(32'h0020c3b3, List::cons(32'h00209413, List::cons(32'h00a0a493,
         List::cons(32'h00302023, List::cons(32'h00402223, List::cons(32'h00502423,
         List::cons(32'h00602623, List::cons(32'h00702823, List::cons(32'h00802a23,
         List::cons(32'h00902c23, List::cons(32'h0000006f, Nil)))))))))))))))));
`endif
endfunction

(* synthesize *)
module mkTb(Empty);
  Clock cpuClk <- exposeCurrentClock;
  Reset cpuRst <- exposeCurrentReset;

  // Slower Debug clock derived from the CPU clock.
  ClockDividerIfc dclk <- mkClockDivider(debug_clk_div);
  Clock dbgClk = dclk.slowClock;
  Reset dbgRst <- mkAsyncReset(2, cpuRst, dbgClk);

  SoCIfc dut <- mkSoC(dbgClk, dbgRst);

  // Program stored as a fixed 64-entry vector (tail zero-padded).
  Vector#(64, Word) prog = toVector(List::append(getProgram(),
                                    List::replicate(64 - List::length(getProgram()), 0)));
  Integer plen = List::length(getProgram());

  // ---- CPU-domain: load program, cycle count, watchdog ----
  Reg#(Bit#(32)) li     <- mkReg(0);
  Reg#(Bool)     loaded <- mkReg(False);
  Reg#(Bit#(32)) cyc    <- mkReg(0);
  SyncBitIfc#(Bit#(1)) loadedSync <- mkSyncBit(cpuClk, cpuRst, dbgClk);

  rule doLoad (!loaded);
    if (li < fromInteger(plen)) begin
      dut.initWord(li, prog[li]);
      li <= li + 1;
    end else begin
      loaded <= True;
      loadedSync.send(1);
      $display("[%s] loaded %0d words", `TESTNAME, plen);
    end
  endrule

  rule count;
    cyc <= cyc + 1;
    if (cyc > fromInteger(watchdog_cycles)) begin
      $display("FAIL[%s]: watchdog timeout at cycle %0d", `TESTNAME, cyc);
      $finish(1);
    end
  endrule

  // ---- Debug-domain scoreboard state (all clocked by dbgClk) ----
  Reg#(Word)     rdVal <- mkReg(0, clocked_by dbgClk, reset_by dbgRst);
  Reg#(Bit#(32)) fails <- mkReg(0, clocked_by dbgClk, reset_by dbgRst);
  Reg#(Bool)     started <- mkReg(False, clocked_by dbgClk, reset_by dbgRst);

  function Action dbgCmd(DbgCmd c, RegIdx rn, Addr a, Word wd) =
    dut.debug.enqReq(DbgReq { cmd: c, regno: rn, addr: a, wdata: wd });

  function Action check(String what, Word got, Word exp) =
    action
      if (got != exp) begin
        $display("FAIL[%s]: %s got=0x%08h exp=0x%08h", `TESTNAME, what, got, exp);
        fails <= fails + 1;
      end else
        $display("  ok[%s]: %s = 0x%08h", `TESTNAME, what, got);
    endaction;

  function Stmt readMem(Addr a) = seq
    dbgCmd(DBG_MEM_RD, 0, a, 0);
    action let r <- dut.debug.getResp; rdVal <= r.rdata; endaction
  endseq;

  function Stmt readGpr(RegIdx r) = seq
    dbgCmd(DBG_GPR_RD, r, 0, 0);
    action let x <- dut.debug.getResp; rdVal <= x.rdata; endaction
  endseq;

  function Stmt awaitResp() = seq
    action let r <- dut.debug.getResp; endaction
  endseq;

  Stmt verifySeq = seq
    delay(500);                       // let the program run to completion

    dbgCmd(DBG_HALT, 0, 0, 0);        // halt the core
    awaitResp();
    delay(10);

`ifdef TEST_FORWARD
    readMem(0);  check("mem[0]", rdVal, 8);
`elsif TEST_LOADUSE
    readMem(0);  check("mem[0]", rdVal, 43);
`elsif TEST_BRANCH
    readMem(0);  check("mem[0]", rdVal, 15);
`elsif TEST_MULDIV
    readMem(0);  check("mul 6*7",  rdVal, 42);
    readMem(4);  check("mul -3*7", rdVal, 32'hFFFFFFEB);
    readMem(8);  check("div 20/3", rdVal, 6);
    readMem(12); check("rem 20%3", rdVal, 2);
    readMem(16); check("div x/0",  rdVal, 32'hFFFFFFFF);
    readMem(20); check("rem x/0",  rdVal, 5);
`elsif TEST_TRAP
    readMem(0);  check("mcause(ecall)", rdVal, 11);
`elsif TEST_ILLEGAL
    readMem(0);  check("mcause(illegal)", rdVal, 2);
`else
    readMem(0);  check("add",  rdVal, 12);
    readMem(4);  check("sub",  rdVal, 2);
    readMem(8);  check("and",  rdVal, 5);   // 5 & 7 = 5 (golden was wrong)
    readMem(12); check("or",   rdVal, 7);
    readMem(16); check("xor",  rdVal, 2);
    readMem(20); check("slli", rdVal, 20);
    readMem(24); check("slti", rdVal, 1);
`endif

    // Exercise the rest of the debug abstract commands.
    dbgCmd(DBG_GPR_WR, 7, 0, 32'hDEADBEEF); awaitResp();
    readGpr(7);  check("dbg gpr rw", rdVal, 32'hDEADBEEF);

    dbgCmd(DBG_MEM_WR, 0, 32'h1000, 32'h12345678); awaitResp();
    readMem(32'h1000); check("dbg mem rw", rdVal, 32'h12345678);

    dbgCmd(DBG_STEP, 0, 0, 0); awaitResp();      // single-step path
    dbgCmd(DBG_RESUME, 0, 0, 0); awaitResp();    // resume path

    if (fails == 0) $display("PASS[%s]", `TESTNAME);
    else            $display("FAIL[%s]: %0d mismatches", `TESTNAME, fails);
    $finish(0);
  endseq;

  FSM fsm <- mkFSM(verifySeq, clocked_by dbgClk, reset_by dbgRst);

  rule startVerify (!started && loadedSync.read == 1);
    fsm.start;
    started <= True;
  endrule
endmodule

endpackage : tb
