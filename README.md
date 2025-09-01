# Hashira Placements Assignment

## Problem
Given JSON input of polynomial roots (in various bases), reconstruct the polynomial and print its coefficients.

- Language: C++
- Time taken: 45 mins

## Approach
1. Parse root values in given base → convert to decimal.
2. Expand polynomial using `(x - root)` multiplication.
3. Output coefficients from highest degree to constant.

## Testcase 2 Output
Polynomial coefficients:
50028741587386460071977435291789706956 5252970527219450329209526010488173323 -119495498167542463058503667710572570588 59606059918704086083325234616899687539 -123058369562556148671497387504829713924 150914427531097725248356514473021493441 -42744980544161216684 1

## Files
- `problem.cpp` → solution code
- `output.txt` → program output
