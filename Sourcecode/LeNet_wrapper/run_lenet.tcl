############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project -reset LeNet
set_top lenet
add_files LeNet_wrapper.cpp
add_files LeNet_wrapper.h
add_files ../hw_library/axi_dma_master.h
add_files ../hw_library/axi_dma_slave.h
add_files config.h
add_files ../hw_library/fixed_point_stream_convolution.h
add_files ../hw_library/fully_connected.h
add_files ../hw_library/pool.h
add_files ../hw_library/stream_convolution_slideWindow.h
add_files -tb main.cpp
open_solution -reset "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./LeNet/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
