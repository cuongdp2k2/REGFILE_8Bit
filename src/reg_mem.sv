module reg_mem(
    // input
    input logic       CLK_i      ,
                      RES_ni     ,
                      EN_i       ,
    input logic [7:0] WRT_DATA_i ,

    // output
    output logic [7:0] READ_DATA_o
);
    reg [7:0] READ_DATA_reg ;
    logic [7:0] WRT_DATA_wire ;
    assign WRT_DATA_wire = (RES_ni) ? WRT_DATA_i : 0 ;
    assign READ_DATA_o = (RES_ni) ? READ_DATA_reg : 0 ;

    always @(posedge CLK_i) 
        if(EN_i) READ_DATA_reg <= WRT_DATA_wire ;
 

endmodule : reg_mem 
