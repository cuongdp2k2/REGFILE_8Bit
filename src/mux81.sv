module mux81(
    // input
    input logic [2:0] RD_ADDR_i ,
    input logic [7:0] REG_DATA0_i ,
    input logic [7:0] REG_DATA1_i ,
    input logic [7:0] REG_DATA2_i ,
    input logic [7:0] REG_DATA3_i ,
    input logic [7:0] REG_DATA4_i ,
    input logic [7:0] REG_DATA5_i ,
    input logic [7:0] REG_DATA6_i ,
    input logic [7:0] REG_DATA7_i ,

    // output
    output logic [7:0] RD_DATA_o 
);
    always_comb begin : MUX81_COMP
        case (RD_ADDR_i)
            3'b000 : RD_DATA_o = REG_DATA0_i ;
            3'b001 : RD_DATA_o = REG_DATA1_i ;
            3'b010 : RD_DATA_o = REG_DATA2_i ;
            3'b011 : RD_DATA_o = REG_DATA3_i ;
            3'b100 : RD_DATA_o = REG_DATA4_i ;
            3'b101 : RD_DATA_o = REG_DATA5_i ;
            3'b110 : RD_DATA_o = REG_DATA6_i ;
            3'b111 : RD_DATA_o = REG_DATA7_i ; 
            default: RD_DATA_o = 8'b00000000 ;
        endcase
    end
endmodule : mux81
