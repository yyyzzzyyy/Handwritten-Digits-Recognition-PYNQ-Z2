############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lenet_op.prj
set_top lenet
add_files LeNet_wrapper/LeNet_wrapper.cpp
add_files LeNet_wrapper/LeNet_wrapper.h
add_files LeNet_wrapper/config.h
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./lenet_op.prj/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
