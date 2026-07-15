// AXI4Lite.bsv -- AXI4-Lite channel types + master/slave interfaces.
// 32-bit address, 32-bit data. Five channels (AW, W, B, AR, R) each modelled
// as a Get/Put of the payload struct. Self-contained (no external AXI lib).
package AXI4Lite;

import Types      :: *;
import GetPut     :: *;
import Connectable:: *;

// ---- Channel payloads ----
typedef struct { Addr    awaddr; Bit#(3) awprot; } AxiAW deriving (Bits, Eq, FShow);
typedef struct { Word    wdata;  Bit#(4) wstrb;  } AxiW  deriving (Bits, Eq, FShow);
typedef struct { Bit#(2) bresp;                  } AxiB  deriving (Bits, Eq, FShow);
typedef struct { Addr    araddr; Bit#(3) arprot; } AxiAR deriving (Bits, Eq, FShow);
typedef struct { Word    rdata;  Bit#(2) rresp;  } AxiR  deriving (Bits, Eq, FShow);

// AXI response codes
Bit#(2) axi_OKAY   = 2'b00;
Bit#(2) axi_SLVERR = 2'b10;

// ---- Master: drives AW/W/AR (Get), receives B/R (Put) ----
interface AXI4Lite_Master;
  interface Get#(AxiAW) aw;
  interface Get#(AxiW)  w;
  interface Put#(AxiB)  b;
  interface Get#(AxiAR) ar;
  interface Put#(AxiR)  r;
endinterface

// ---- Slave: mirror of master ----
interface AXI4Lite_Slave;
  interface Put#(AxiAW) aw;
  interface Put#(AxiW)  w;
  interface Get#(AxiB)  b;
  interface Put#(AxiAR) ar;
  interface Get#(AxiR)  r;
endinterface

// Connect a master to a slave channel-by-channel.
instance Connectable#(AXI4Lite_Master, AXI4Lite_Slave);
  module mkConnection#(AXI4Lite_Master m, AXI4Lite_Slave s)(Empty);
    mkConnection(m.aw, s.aw);
    mkConnection(m.w,  s.w);
    mkConnection(s.b,  m.b);
    mkConnection(m.ar, s.ar);
    mkConnection(s.r,  m.r);
  endmodule
endinstance

endpackage : AXI4Lite
