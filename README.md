# Ohm's Law Calculator

A simple command-line program written in C that solves basic electrical problems using Ohm's law.

## Features
- Calculates **Voltage (V)**, **Current (I)** or **Resistance (R)** from the other two values
- Calculates **Power (P)**.

## Formulas Used
- V = I × R
- I = V / R
- R = V / I
- P = V × I

## How to Compile and Run
Requires a C compiler such as GCC, but it is also compatible with online compilers like "Programiz-C-compiler".

    gcc ohms_law.c -o ohms_law
    ./ohms_law          (on Windows: ohms_law.exe)

## Sample Output
    Enter voltage (V): 12
    Enter resistance (Ω): 4
    Current = 3.00 A

## Future Improvements
- Series and parallel resistance
- Loop for repeated calculations

## About
First-year B.Tech (ENTC) Semester 1 mini project, made while learning Basics of C programming and Fundamentals of Electrical Engineering.
