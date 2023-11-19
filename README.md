# ALU Arithmetic and Logic Operations

## Introduction:

The ALU Arithmetic and Logic Operation project is designed as the final project for digital logic design. The Arithmetic and Logic Unit (ALU) in the processor plays a crucial role in performing arithmetic and logic operations within a computer system. The user can input complex mathematical operations, which the ALU processes within the CPU. However, computers can only comprehend these problems when expressed in binary language, represented as 0s and 1s.

## Objectives:

- The ALU aims to handle all mathematical and logical problems provided by the user and produce accurate outputs accordingly.
- The functionality of the unit is thoroughly tested to ensure the accuracy of solutions.

## Features:

- The primary functionality is the ability of the unit to solve mathematical operations, regardless of their complexity.
- The application incorporates an effective error-handling mechanism to manage invalid inputs and notify users.
- Efficient algorithms are implemented to guarantee fast and optimal performance.

## Implementation:

- The ALU is designed to perform nine operations, including four arithmetic operations (addition, multiplication, division, subtraction) and five logical operations (AND, OR, NAND, NOR, XOR, and NOT).
- It takes two 4-bit inputs (A and B), resulting in a total of 8-bit inputs. The output is also 4-bit.
- The Verilog code defines all the operations, inputs, and outputs.
- After simulation checks, the code is implemented on hardware.
- On an FPGA, pins for inputs and outputs are defined, and the output is displayed using LEDs.

## How to Use:

1. **Inputs:**
   - Provide two 4-bit inputs (A and B) for the desired operation.

2. **Outputs:**
   - The result of the operation is displayed as a 4-bit output.

3. **Supported Operations:**
   - Arithmetic: Addition, Multiplication, Division, Subtraction
   - Logical: AND, OR, NAND, NOR, XOR, NOT

4. **Error Handling:**
   - The application includes mechanisms to handle invalid inputs and notifies users.

## Implementation Steps:

1. Define Verilog code with operations, inputs, and outputs.
2. Simulate the code to ensure correct functionality.
3. Implement the code on hardware, such as an FPGA.
4. Define pins for inputs and outputs on the FPGA.
5. Display the output using LEDs.

## Contributions

We welcome contributions to this project! If you find any bugs, have suggestions for improvements, or want to add new features, please feel free to create issues or submit pull requests.

## License

This project is licensed by MIT license.

## Contact

For any inquiries or support, please contact Abdullah at abdullahmaqbool08@gmail.com.
