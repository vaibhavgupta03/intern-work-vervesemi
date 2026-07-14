`timescale 1ns/1ps

// 1. Load the leaf sub-checker components first
`include "./../uart-verification-suite/uart_protocol_checker.v"
`include "./../uart-verification-suite/uart_regfile_spec_checker.v"
`include "./../uart-verification-suite/axi_spec_checker.v"

// 2. Load the top level checker wrapper that uses them
`include "./../uart-verification-suite/uart_spec_top.v"
