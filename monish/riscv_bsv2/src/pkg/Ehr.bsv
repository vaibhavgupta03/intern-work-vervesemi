// ============================================================================
// Ehr.bsv -- Ephemeral History Register (CReg), RWire + canonicalize style.
// ----------------------------------------------------------------------------
// An Ehr#(n, t) is a Vector of n Reg#(t) "port" views of one register:
//   * r[i]._read  returns the register value updated by any _write to a port
//     LOWER than i performed in the same cycle (intra-cycle forwarding).
//   * r[i]._write stages a write at port i; when several ports write in the
//     same cycle, the HIGHEST port wins (applied last by `canonicalize`).
// Scheduling: write[j] SB read[i] for j < i; a port's own read/write pair may
// be used inside a single rule; writes to the SAME port from two rules
// conflict (one writer per port, as documented at each use site).
//
// NOTE: this package is part of the project source (src/pkg) because bsc's
// standard library does not ship an Ehr package. If your installation already
// provides one on the search path, keep only one copy.
// ============================================================================
package Ehr;

import Vector :: *;

typedef Vector#(n, Reg#(t)) Ehr#(numeric type n, type t);

module mkEhr#(t init)(Ehr#(n, t)) provisos (Bits#(t, tSz));
  Reg#(t)               r <- mkReg(init);
  Vector#(n, RWire#(t)) w <- replicateM(mkRWire);

  // Fold the staged writes into the register at the end of the cycle;
  // higher ports override lower ones.
  (* fire_when_enabled, no_implicit_conditions *)
  rule canonicalize;
    t v = r;
    for (Integer i = 0; i < valueOf(n); i = i + 1)
      v = fromMaybe(v, w[i].wget);
    r <= v;
  endrule

  Ehr#(n, t) ifc = newVector;
  for (Integer i = 0; i < valueOf(n); i = i + 1) begin
    ifc[i] = (interface Reg;
                method t _read;
                  t v = r;
                  for (Integer j = 0; j < i; j = j + 1)
                    v = fromMaybe(v, w[j].wget);
                  return v;
                endmethod
                method Action _write(t x);
                  w[i].wset(x);
                endmethod
              endinterface);
  end
  return ifc;
endmodule

endpackage : Ehr
