`timescale 1ns / 1ps

module tb_dtm_dmi();

    reg tck, trst_n, tdi;
    reg shift_dr, update_dr;
    reg [4:0] ir_out;
    
    wire tdo, dmi_req_valid;
    wire [6:0]  dmi_req_addr;
    wire [31:0] dmi_req_data;
    wire [1:0]  dmi_req_op;

    // Instantiate UUT
    dtm_dmi uut (
        .tck(tck), .trst_n(trst_n), .tdi(tdi),
        .shift_dr(shift_dr), .update_dr(update_dr), .ir_out(ir_out),
        .tdo(tdo), .dmi_req_valid(dmi_req_valid), 
        .dmi_req_addr(dmi_req_addr), .dmi_req_data(dmi_req_data), .dmi_req_op(dmi_req_op)
    );

    // Clock Generation
    always #10 tck = ~tck;
    
    // 41-bit test vector to send: 
    // Addr = 0x10 (7 bits: 0010000)
    // Data = 0x00000001 (32 bits)
    // Op   = 2 for Write (2 bits: 10)
    // Total 41 bits: 0010000_00000000000000000000000000000001_10
    reg [40:0] test_dmi_packet = 41'b0010000_00000000000000000000000000000001_10;
    integer i;

    initial begin
        // Init
        tck = 0; trst_n = 0; tdi = 0;
        shift_dr = 0; update_dr = 0; ir_out = 5'h00;

        #15 trst_n = 1; #15;

        // Set IR to 0x11 (DMI Command)
        ir_out = 5'h11;
        
        // --- Start 41-bit Shift-DR ---
        shift_dr = 1;
        
        // Send data bit-by-bit (LSB first)
        for (i = 0; i < 41; i = i + 1) begin
            tdi = test_dmi_packet[i];
            #20; 
        end
        shift_dr = 0;

        // --- Trigger Update-DR ---
        update_dr = 1; #20;
        update_dr = 0; #20;

        // Wait to observe the output
        #100;
        $finish;
    end
endmodule