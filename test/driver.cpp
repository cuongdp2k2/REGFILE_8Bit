#define MAX_SIM 2000

/*--------- MAIN TEST BENCH HERE -------------------------------------*/ 
void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->RES_ni = (sim_unit < 5) ? 0 : 1 ;
	dut->WRT_EN_i = rand() % 2 ;
	dut->WRT_DEST_i = rand() % 8 ;
	dut->WRT_DATA_i = rand() % 256 ;
	dut->READ_ADDR1_i = rand() % 8 ;
	dut->READ_ADDR2_i = rand() % 8 ;

	static FILE *report;
	report = fopen("report.csv","a") ;
	if(report == NULL) {
		printf("ERROR");
		return ;
	}
	fprintf(report,"Test %ld,DECODE 3-8,Register0,Register1,Register2,Register3,Register4,Register5,Register6,Register7\n",sim_unit);
	fprintf(report,",") ;
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_sel_wire);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[7U]);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[6U]);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[5U]);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[4U]);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[3U]);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[2U]);
	fprintf(report,"%x,",dut->top__DOT__REGFILE__DOT__reg_data_wire[1U]);
	fprintf(report,"%x\n",dut->top__DOT__REGFILE__DOT__reg_data_wire[0U]);

	fclose(report) ;
	
}

