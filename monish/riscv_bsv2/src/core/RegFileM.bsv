// RegFile.bsv -- 32x32 GPRs. EHR-based so a WB write is seen by a same-cycle
// ID read (write-before-read). x0 hard-wired to 0. Debug port for halt access.
package RegFileM;

import Types  :: *;
import Vector :: *;
import Ehr    :: *;

interface RegFileIfc;
  method Word  read1(RegIdx a);          // ID read port (sees WB write)
  method Word  read2(RegIdx a);
  method Action write(RegIdx a, Word d); // WB write port (port 0)
  method Word  dbgRead(RegIdx a);        // debug read (committed state)
  method Action dbgWrite(RegIdx a, Word d);
endinterface

(* synthesize *)
module mkRegFile(RegFileIfc);
  // 3-port EHR per register: [0]=WB write, [1]=debug write, [2]=ID read.
  // ID read (port 2) sees WB write (port 0) in the same cycle; debug write is
  // its own port so it never conflicts with the WB rule.
  Vector#(32, Ehr#(3, Word)) rf <- replicateM(mkEhr(0));

  method Word read1(RegIdx a) = (a == 0) ? 0 : rf[a][2];
  method Word read2(RegIdx a) = (a == 0) ? 0 : rf[a][2];

  method Action write(RegIdx a, Word d);
    if (a != 0) rf[a][0] <= d;
  endmethod

  method Word dbgRead(RegIdx a) = (a == 0) ? 0 : rf[a][0];
  method Action dbgWrite(RegIdx a, Word d);
    if (a != 0) rf[a][1] <= d;
  endmethod
endmodule

endpackage : RegFileM
