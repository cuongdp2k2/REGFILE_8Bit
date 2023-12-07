module top (
    // input
    input logic         clk_i                      , 
                        RES_ni                     ,
                        WRT_EN_i                   ,
    input logic [2:0]   WRT_DEST_i                 ,
    input logic [7:0]   WRT_DATA_i                 ,
    input logic [2:0]   READ_ADDR1_i               ,
    input logic [2:0]   READ_ADDR2_i               ,

    // output
    output logic [7:0]   RD_DATA1_o                ,
    output logic [7:0]   RD_DATA2_o
);
	regfile REGFILE (
        .CLK_i (clk_i) ,
        .*    
    );  
	 
endmodule : top
