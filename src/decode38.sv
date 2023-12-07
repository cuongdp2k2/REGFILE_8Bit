module decode38 (
    // input
    input logic [2:0] A_i  ,
    input logic       EN_i ,

    // output
    output logic [7:0] Sel_o 
);
    logic [7:0] Sel_wire ;
    assign Sel_o = (EN_i) ? Sel_wire : 0 ;
    always_comb begin 
        case (A_i)
            3'b000 : Sel_wire = 8'b00000001 ;
            3'b001 : Sel_wire = 8'b00000010 ;
            3'b010 : Sel_wire = 8'b00000100 ;
            3'b011 : Sel_wire = 8'b00001000 ;
            3'b100 : Sel_wire = 8'b00010000 ;
            3'b101 : Sel_wire = 8'b00100000 ;
            3'b110 : Sel_wire = 8'b01000000 ;
            3'b111 : Sel_wire = 8'b10000000 ; 
            default: Sel_wire = 8'b00000000 ; 
        endcase 
    end
endmodule : decode38
