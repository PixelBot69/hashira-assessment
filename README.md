# Hashira Placements Assignment

## Problem
Given JSON input of polynomial roots (in various bases), reconstruct the polynomial and print its coefficients.

- Language: C++
- Time taken: 45 mins

## Approach
1. Parse root values in given base → convert to decimal.
2. Expand polynomial using `(x - root)` multiplication.
3. Output coefficients from highest degree to constant.

TestCase1 :  1 9 6
TestCase2 :  1 41 40 32 20 5 7

## Files
- `problem.cpp` → solution code
- `output.txt` → program output
