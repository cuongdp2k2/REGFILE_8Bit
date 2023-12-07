module regfile (
    // input
    input logic         CLK_i                      , 
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
    logic [7:0] reg_sel_wire                       ;
    logic [7:0] reg_data_wire [7:0]                ;

    decode38 DECODER_3To8 (
        .A_i   (WRT_DEST_i)                        ,
        .EN_i  (WRT_EN_i)                          ,

        .Sel_o (reg_sel_wire)  
    );

    genvar i ;
    generate
        for(i=0 ; i < 8 ; i++ ) begin : _REGISTER_
            reg_mem REG_COM (
                .CLK_i      (CLK_i)               ,
                .RES_ni     (RES_ni)              ,
                .EN_i       (reg_sel_wire[i])     ,
                .WRT_DATA_i (WRT_DATA_i)          ,
                
                .READ_DATA_o(reg_data_wire[i])
            );
        end
    endgenerate

    mux81 RD_DATA1 (
        .RD_ADDR_i   (READ_ADDR1_i)              ,
        .REG_DATA0_i (reg_data_wire[0])          ,
        .REG_DATA1_i (reg_data_wire[1])          ,
        .REG_DATA2_i (reg_data_wire[2])          ,
        .REG_DATA3_i (reg_data_wire[3])          ,
        .REG_DATA4_i (reg_data_wire[4])          ,
        .REG_DATA5_i (reg_data_wire[5])          ,
        .REG_DATA6_i (reg_data_wire[6])          ,
        .REG_DATA7_i (reg_data_wire[7])          ,
        .RD_DATA_o   (RD_DATA1_o)
    );
    
    mux81 RD_DATA2 (
        .RD_ADDR_i   (READ_ADDR2_i)              ,
        .REG_DATA0_i (reg_data_wire[0])          ,
        .REG_DATA1_i (reg_data_wire[1])          ,
        .REG_DATA2_i (reg_data_wire[2])          ,
        .REG_DATA3_i (reg_data_wire[3])          ,
        .REG_DATA4_i (reg_data_wire[4])          ,
        .REG_DATA5_i (reg_data_wire[5])          ,
        .REG_DATA6_i (reg_data_wire[6])          ,
        .REG_DATA7_i (reg_data_wire[7])          ,
        .RD_DATA_o   (RD_DATA2_o)
    );

endmodule : regfile
