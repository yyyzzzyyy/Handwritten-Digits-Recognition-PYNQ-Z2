set moduleName SMM_1u_25u_20u_s
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {SMM<1u, 25u, 20u>}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_stream_a_V_V int 32 regular {fifo 0 volatile }  }
	{ out_stream_V_V int 32 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_stream_a_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "out_stream_V_V", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ in_stream_a_V_V_dout sc_in sc_lv 32 signal 0 } 
	{ in_stream_a_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_stream_a_V_V_read sc_out sc_logic 1 signal 0 } 
	{ out_stream_V_V_din sc_out sc_lv 32 signal 1 } 
	{ out_stream_V_V_full_n sc_in sc_logic 1 signal 1 } 
	{ out_stream_V_V_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "in_stream_a_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_stream_a_V_V", "role": "dout" }} , 
 	{ "name": "in_stream_a_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_stream_a_V_V", "role": "empty_n" }} , 
 	{ "name": "in_stream_a_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_stream_a_V_V", "role": "read" }} , 
 	{ "name": "out_stream_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_stream_V_V", "role": "din" }} , 
 	{ "name": "out_stream_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_stream_V_V", "role": "full_n" }} , 
 	{ "name": "out_stream_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_stream_V_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53"],
		"CDFG" : "SMM_1u_25u_20u_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_stream_a_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_stream_a_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_stream_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_stream_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "B_COL_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "B_ROW_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "OFMDim_current_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "A_ROW_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "B_V_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B_V_2_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_V_2_24", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_12_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_13_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_14_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_16_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_17_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_18_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_19_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_20_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_21_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_22_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_23_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.B_V_2_24_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_0_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_1_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_2_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_3_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_4_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_5_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_6_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_7_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_8_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_9_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_10_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_11_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_12_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_13_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_14_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_15_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_16_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_17_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_18_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_19_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_20_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_21_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_22_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_23_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_V_2_24_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_mux_255_8_1_1_U7", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_mux_255_8_1_1_U8", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_mac_muladd_Zio_U9", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	SMM_1u_25u_20u_s {
		in_stream_a_V_V {Type I LastRead 11 FirstWrite -1}
		out_stream_V_V {Type O LastRead -1 FirstWrite 0}
		B_COL_1 {Type IO LastRead -1 FirstWrite -1}
		B_ROW_1 {Type IO LastRead -1 FirstWrite -1}
		OFMDim_current_1 {Type IO LastRead -1 FirstWrite -1}
		A_ROW_1 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_0 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_1 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_2 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_3 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		B_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_0 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_1 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_2 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_3 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		A_V_2_24 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	in_stream_a_V_V { ap_fifo {  { in_stream_a_V_V_dout fifo_data 0 32 }  { in_stream_a_V_V_empty_n fifo_status 0 1 }  { in_stream_a_V_V_read fifo_update 1 1 } } }
	out_stream_V_V { ap_fifo {  { out_stream_V_V_din fifo_data 1 32 }  { out_stream_V_V_full_n fifo_status 0 1 }  { out_stream_V_V_write fifo_update 1 1 } } }
}
