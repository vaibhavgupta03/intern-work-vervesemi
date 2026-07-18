#!/usr/bin/env python3
"""Tiny RV32IM assembler for the built-in test programs.
Supports the subset used by the testbench. Emits 32-bit little-endian words as
hex, one per line, suitable for $readmemh and for embedding into tb.bsv.

Usage: python3 asm.py <prog_name>   # prints hex words
Programs are defined at the bottom. Keep them small and self-checking: each
ends by writing a result pattern to memory and looping (the TB reads via debug).
"""
import sys

R = {f"x{i}": i for i in range(32)}
# ABI aliases
R.update({"zero":0,"ra":1,"sp":2,"gp":3,"tp":4,"t0":5,"t1":6,"t2":7,
          "s0":8,"fp":8,"s1":9,"a0":10,"a1":11,"a2":12,"a3":13,"a4":14,
          "a5":15,"a6":16,"a7":17,"s2":18,"s3":19,"s4":20,"s5":21,"s6":22,
          "s7":23,"s8":24,"s9":25,"s10":26,"s11":27,"t3":28,"t4":29,"t5":30,"t6":31})

def reg(x): return R[x] if isinstance(x,str) else x
def u(v,n): return v & ((1<<n)-1)

def rtype(f7,rs2,rs1,f3,rd,op): return (f7<<25)|(reg(rs2)<<20)|(reg(rs1)<<15)|(f3<<12)|(reg(rd)<<7)|op
def itype(imm,rs1,f3,rd,op):    return (u(imm,12)<<20)|(reg(rs1)<<15)|(f3<<12)|(reg(rd)<<7)|op
def stype(imm,rs2,rs1,f3,op):
    i=u(imm,12); return ((i>>5)<<25)|(reg(rs2)<<20)|(reg(rs1)<<15)|(f3<<12)|((i&0x1f)<<7)|op
def btype(imm,rs2,rs1,f3,op):
    i=u(imm,13)
    b12=(i>>12)&1; b11=(i>>11)&1; b10_5=(i>>5)&0x3f; b4_1=(i>>1)&0xf
    return (b12<<31)|(b10_5<<25)|(reg(rs2)<<20)|(reg(rs1)<<15)|(f3<<12)|(b4_1<<8)|(b11<<7)|op
def utype(imm,rd,op): return (u(imm,20)<<12)|(reg(rd)<<7)|op
def jtype(imm,rd,op):
    i=u(imm,21)
    b20=(i>>20)&1; b10_1=(i>>1)&0x3ff; b11=(i>>11)&1; b19_12=(i>>12)&0xff
    return (b20<<31)|(b10_1<<21)|(b11<<20)|(b19_12<<12)|(reg(rd)<<7)|op

OP,OPIMM,OLUI,OAUIPC,OJAL,OJALR,BR,LD,ST,SYS = 0x33,0x13,0x37,0x17,0x6f,0x67,0x63,0x03,0x23,0x73

# instruction helpers
def ADDI(rd,rs1,imm): return itype(imm,rs1,0,rd,OPIMM)
def ANDI(rd,rs1,imm): return itype(imm,rs1,7,rd,OPIMM)
def ORI (rd,rs1,imm): return itype(imm,rs1,6,rd,OPIMM)
def XORI(rd,rs1,imm): return itype(imm,rs1,4,rd,OPIMM)
def SLTI(rd,rs1,imm): return itype(imm,rs1,2,rd,OPIMM)
def SLLI(rd,rs1,sh):  return itype(sh,rs1,1,rd,OPIMM)
def SRLI(rd,rs1,sh):  return itype(sh,rs1,5,rd,OPIMM)
def SRAI(rd,rs1,sh):  return itype(0x400|sh,rs1,5,rd,OPIMM)
def ADD(rd,rs1,rs2):  return rtype(0,rs2,rs1,0,rd,OP)
def SUB(rd,rs1,rs2):  return rtype(0x20,rs2,rs1,0,rd,OP)
def AND(rd,rs1,rs2):  return rtype(0,rs2,rs1,7,rd,OP)
def OR (rd,rs1,rs2):  return rtype(0,rs2,rs1,6,rd,OP)
def XOR(rd,rs1,rs2):  return rtype(0,rs2,rs1,4,rd,OP)
def SLL(rd,rs1,rs2):  return rtype(0,rs2,rs1,1,rd,OP)
def SRL(rd,rs1,rs2):  return rtype(0,rs2,rs1,5,rd,OP)
def SRA(rd,rs1,rs2):  return rtype(0x20,rs2,rs1,5,rd,OP)
def SLT(rd,rs1,rs2):  return rtype(0,rs2,rs1,2,rd,OP)
def SLTU(rd,rs1,rs2): return rtype(0,rs2,rs1,3,rd,OP)
def MUL(rd,rs1,rs2):    return rtype(1,rs2,rs1,0,rd,OP)
def MULH(rd,rs1,rs2):   return rtype(1,rs2,rs1,1,rd,OP)
def MULHU(rd,rs1,rs2):  return rtype(1,rs2,rs1,3,rd,OP)
def MULHSU(rd,rs1,rs2): return rtype(1,rs2,rs1,2,rd,OP)
def DIV(rd,rs1,rs2):    return rtype(1,rs2,rs1,4,rd,OP)
def DIVU(rd,rs1,rs2):   return rtype(1,rs2,rs1,5,rd,OP)
def REM(rd,rs1,rs2):    return rtype(1,rs2,rs1,6,rd,OP)
def REMU(rd,rs1,rs2):   return rtype(1,rs2,rs1,7,rd,OP)
def LW(rd,rs1,imm):  return itype(imm,rs1,2,rd,LD)
def LB(rd,rs1,imm):  return itype(imm,rs1,0,rd,LD)
def LH(rd,rs1,imm):  return itype(imm,rs1,1,rd,LD)
def LBU(rd,rs1,imm): return itype(imm,rs1,4,rd,LD)
def SW(rs2,rs1,imm): return stype(imm,rs2,rs1,2,ST)
def SB(rs2,rs1,imm): return stype(imm,rs2,rs1,0,ST)
def SH(rs2,rs1,imm): return stype(imm,rs2,rs1,1,ST)
def BEQ(rs1,rs2,imm): return btype(imm,rs2,rs1,0,BR)
def BNE(rs1,rs2,imm): return btype(imm,rs2,rs1,1,BR)
def BLT(rs1,rs2,imm): return btype(imm,rs2,rs1,4,BR)
def BGE(rs1,rs2,imm): return btype(imm,rs2,rs1,5,BR)
def LUIi(rd,imm):   return utype(imm,rd,OLUI)
def AUIPCi(rd,imm): return utype(imm,rd,OAUIPC)
def JAL(rd,imm):    return jtype(imm,rd,OJAL)
def JALR(rd,rs1,imm): return itype(imm,rs1,0,rd,OJALR)
def CSRRW(rd,csr,rs1): return itype(csr,rs1,1,rd,SYS)
def CSRRS(rd,csr,rs1): return itype(csr,rs1,2,rd,SYS)
def CSRRC(rd,csr,rs1): return itype(csr,rs1,3,rd,SYS)
def CSRRWI(rd,csr,imm):return itype(csr,imm,5,rd,SYS)
def ECALL():  return itype(0x000,0,0,0,SYS)
def EBREAK(): return itype(0x001,0,0,0,SYS)
def MRET():   return itype(0x302,0,0,0,SYS)
def ILLEGAL():return 0xFFFFFFFF   # all-ones is not a valid RV32IM encoding

MTVEC,MEPC,MCAUSE,MSCRATCH = 0x305,0x341,0x342,0x340

def prog_alu():
    # basic ALU + immediates; store results to mem[0..]
    return [
        ADDI(1,0,5), ADDI(2,0,7), ADD(3,1,2),   # x3=12
        SUB(4,2,1),                             # x4=2
        AND(5,1,2), OR(6,1,2), XOR(7,1,2),      # 5,7,2
        SLLI(8,1,2),                            # x8=20
        SLTI(9,1,10),                           # x9=1
        SW(3,0,0), SW(4,0,4), SW(5,0,8),
        SW(6,0,12), SW(7,0,16), SW(8,0,20), SW(9,0,24),
    ] + halt()

def prog_forward():
    # dependent chain exercising EX/MEM and MEM/WB forwarding
    return [
        ADDI(1,0,1), ADDI(2,1,1), ADDI(3,2,1), ADDI(4,3,1),  # 1,2,3,4
        ADD(5,4,4),                                          # 8
        SW(5,0,0),
    ] + halt()

def prog_loaduse():
    # store then load then immediately use (load-use hazard -> 1 stall)
    return [
        ADDI(1,0,0x2A), SW(1,0,64),   # mem[64]=42
        LW(2,0,64), ADDI(3,2,1),      # x3 = 42+1 = 43 (needs load-use interlock)
        SW(3,0,0),
    ] + halt()

def prog_branch():
    # countdown loop: sum 5+4+3+2+1 = 15
    return [
        ADDI(1,0,5),  # counter
        ADDI(2,0,0),  # acc
        # loop:
        ADD(2,2,1),           # acc += counter
        ADDI(1,1,-1),         # counter--
        BNE(1,0,-8),          # if counter!=0 goto loop (back 2 instrs = -8)
        SW(2,0,0),            # store 15
    ] + halt()

def prog_muldiv():
    return [
        ADDI(1,0,6), ADDI(2,0,7), MUL(3,1,2),      # 42
        ADDI(4,0,-3), MUL(5,4,2),                  # -21
        ADDI(6,0,20), ADDI(7,0,3), DIV(8,6,7),     # 6
        REM(9,6,7),                                # 2
        ADDI(10,0,5), ADDI(11,0,0), DIV(12,10,11), # div by zero -> -1
        REM(13,10,11),                             # rem by zero -> 5
        SW(3,0,0), SW(5,0,4), SW(8,0,8),
        SW(9,0,12), SW(12,0,16), SW(13,0,20),
    ] + halt()

def prog_trap():
    # set mtvec to handler, do ECALL, handler records mcause, mret back
    # layout: code starts at 0. handler placed at a known address via mtvec.
    body = [
        # setup: mtvec = HANDLER_ADDR (computed below), mscratch marker
        LUIi(1,0),                 # placeholder; patched after we know addr
        CSRRW(0,MTVEC,1),
        ADDI(5,0,0),               # x5 will hold mcause (set by handler)
        ECALL(),                   # trap -> handler
        # after mret returns here:
        SW(5,0,0),                 # store mcause (should be 11)
    ] + halt_at()   # halt loop
    # handler:
    handler_off = len(body)*4
    handler = [
        CSRRS(5,MCAUSE,0),         # x5 = mcause
        CSRRS(6,MEPC,0),           # x6 = mepc
        ADDI(6,6,4),               # skip the ECALL
        CSRRW(0,MEPC,6),           # mepc = ecall+4
        MRET(),
    ]
    words = body + handler
    # patch mtvec load (LUI loads upper 20 bits; handler_off is small so use
    # ADDI form instead). Replace first two instrs with LUI+ADDI to form addr.
    hi = (handler_off + 0x800) >> 12
    lo = handler_off - (hi<<12)
    words[0] = LUIi(1,hi)
    words.insert(1, ADDI(1,1,lo))  # shift everything down by one; recompute
    # recompute handler offset after insert
    # simpler: rebuild cleanly
    return build_trap()

def build_trap():
    # clean rebuild with fixed addresses
    # 0: LUI x1, hi(handler)
    # 4: ADDI x1,x1, lo(handler)
    # 8: CSRRW mtvec, x1
    # c: ADDI x5,x0,0
    #10: ECALL
    #14: SW x5, 0(x0)       -> store mcause
    #18: <halt loop 2 instrs>
    #20: (halt) JAL x0, 0
    # handler @ 0x24
    HALT = 0x1C  # will compute
    pre = [None,None,None, ADDI(5,0,0), ECALL(), SW(5,0,0)]
    halt_loop = [ JAL(0,0) ]   # infinite self-loop = halt
    handler_addr = (len(pre)+len(halt_loop))*4
    hi = (handler_addr + 0x800) >> 12
    lo = handler_addr - (hi<<12)
    if lo >= 0x800: lo -= 0x1000
    pre[0] = LUIi(1,hi)
    pre[1] = ADDI(1,1,lo)
    pre[2] = CSRRW(0,MTVEC,1)
    handler = [
        CSRRS(5,MCAUSE,0),
        CSRRS(6,MEPC,0),
        ADDI(6,6,4),
        CSRRW(0,MEPC,6),
        MRET(),
    ]
    return pre + halt_loop + handler

def prog_illegal():
    # trigger illegal instruction, handler sets marker
    HALT_ADDR = 0
    pre = [None,None,None, ADDI(5,0,0), ILLEGAL(), SW(5,0,0)]
    halt_loop = [ JAL(0,0) ]
    handler_addr = (len(pre)+len(halt_loop))*4
    hi = (handler_addr + 0x800) >> 12
    lo = handler_addr - (hi<<12)
    if lo >= 0x800: lo -= 0x1000
    pre[0]=LUIi(1,hi); pre[1]=ADDI(1,1,lo); pre[2]=CSRRW(0,MTVEC,1)
    handler=[ CSRRS(5,MCAUSE,0), CSRRS(6,MEPC,0), ADDI(6,6,4),
              CSRRW(0,MEPC,6), MRET() ]
    return pre + halt_loop + handler

def halt():        return [ JAL(0,0) ]           # self-loop
def halt_at():     return [ JAL(0,0) ]

PROGS = {
    "alu": prog_alu, "forward": prog_forward, "loaduse": prog_loaduse,
    "branch": prog_branch, "muldiv": prog_muldiv, "trap": build_trap,
    "illegal": prog_illegal,
}

def emit(name):
    words = PROGS[name]()
    for w in words:
        print(f"{w & 0xffffffff:08x}")

if __name__ == "__main__":
    name = sys.argv[1] if len(sys.argv)>1 else "alu"
    emit(name)
