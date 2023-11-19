`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:35:36 06/16/2023 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU (
  input [3:0] A,
  input [2:0] Op,
  input [3:0] B,
  output [3:0] R
);
  wire [3:0] Reg1, Reg2;
  wire [4:0] add_result;
  wire [3:0] sub_result;
  wire sub_borrow;
  wire [3:0] not_result;
  wire [3:0] nand_result;
  wire [3:0] nor_result;
  wire [3:0] and_result;
  wire [3:0] or_result;
  wire [3:0] xor_result;
  reg [3:0] Reg3;

  assign Reg1 = A;
  assign Reg2 = B;
  assign R = Reg3;

  // Arithmetic operations
  assign add_result = Reg1 + Reg2;
  assign sub_result = Reg1 - Reg2;

  // Logic operations using gates
  
  // NOT GATE
  not not1 (not_result[0], Reg1[0]);
  not not2 (not_result[1], Reg1[1]);
  not not3 (not_result[2], Reg1[2]);
  not not4 (not_result[3], Reg1[3]);
  
  // AND GATE
  and and1 (and_result[0], Reg1[0], Reg2[0]);
  and and2 (and_result[1], Reg1[1], Reg2[1]);
  and and3 (and_result[2], Reg1[2], Reg2[2]);
  and and4 (and_result[3], Reg1[3], Reg2[3]);
  
  // NAND GATE
  nand nand1 (nand_result[0], Reg1[0], Reg2[0]);
  nand nand2 (nand_result[1], Reg1[1], Reg2[1]);
  nand nand3 (nand_result[2], Reg1[2], Reg2[2]);
  nand nand4 (nand_result[3], Reg1[3], Reg2[3]);
  
  // OR GATE
  or or1 (or_result[0], Reg1[0], Reg2[0]);
  or or2 (or_result[1], Reg1[1], Reg2[1]);
  or or3 (or_result[2], Reg1[2], Reg2[2]);
  or or4 (or_result[3], Reg1[3], Reg2[3]);
  
  // NOR RESULT
  nor nor1 (nor_result[0], Reg1[0], Reg2[0]);
  nor nor2 (nor_result[1], Reg1[1], Reg2[1]);
  nor nor3 (nor_result[2], Reg1[2], Reg2[2]);
  nor nor4 (nor_result[3], Reg1[3], Reg2[3]);
  
  // XOR GATE
  xor xor1 (xor_result[0], Reg1[0], Reg2[0]);
  xor xor2 (xor_result[1], Reg1[1], Reg2[1]);
  xor xor3 (xor_result[2], Reg1[2], Reg2[2]);
  xor xor4 (xor_result[3], Reg1[3], Reg2[3]);

  always @(Op or Reg1 or Reg2) begin
    case (Op)
      3'b000: Reg3 = add_result;    // addition
      3'b001: Reg3 = sub_result;    // subtraction
      3'b010: Reg3 = not_result;    // NOT gate
      3'b011: Reg3 = nand_result;   // NAND gate 
      3'b100: Reg3 = nor_result;    // NOR gate
      3'b101: Reg3 = and_result;    // AND gate
      3'b110: Reg3 = or_result;     // OR gate
      3'b111: Reg3 = xor_result;    // XOR gate
      default: Reg3 = 4'bZZZZ;     // default output
    endcase 
  end
endmodule
