############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project poly1305
set_top poly1305_hw
add_files poly1305/.apc/.src/poly1305_head.h
add_files poly1305/.apc/.src/poly1305_hw.cpp
add_files -tb poly1305_tb.cpp
open_solution "solution1"
set_part {xc7vx485tffg1157-1}
create_clock -period 10 -name default
#source "./poly1305/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
