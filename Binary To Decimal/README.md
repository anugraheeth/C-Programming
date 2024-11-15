# Binary to Decimal Conversion in C

## Overview
This program converts a binary number into its decimal equivalent using a simple algorithm. It takes a binary number as input, processes each digit, and calculates the decimal value by applying powers of 2.

## Purpose
The program demonstrates how to manually convert a binary number (e.g., `11011`) to decimal using basic arithmetic and loops, making it useful for learning number system conversions in C programming.

## How It Works
1. The binary number is stored in an integer variable (`Binary = 11011`).
2. Each digit is extracted using the modulus operator (`%`).
3. The decimal value is calculated by adding the product of the binary digit and its positional value (powers of 2).
4. The binary number is divided by 10 in each iteration to move to the next digit.
5. The process continues until all digits of the binary number are processed.

## Code
Here’s the implementation:

```c
#include <stdio.h>

int main() {
    int Binary = 11011; // Binary number
    printf("Binary number: %d\n", Binary);

    int a = 1;          // Power of 2 multiplier
    int ans = 0;        // To store the decimal result

    // Conversion logic
    while (Binary != 0) {
        ans = ans + (Binary % 10) * a; // Add the least significant bit's contribution
        Binary = Binary / 10;         // Remove the processed digit
        a = a * 2;                    // Move to the next power of 2
    }

    printf("Decimal equivalent: %d\n", ans);
    return 0;
}
```

## Compilation and Execution
To run the program:

1. Compile with:
   ```bash
   gcc B2D.c -o BinaryToDecimal
   ```
2. Execute with:
   ```bash
   ./BinaryToDecimal
   ```

## Output
For the input `Binary = 11011`, the output will be:

```
Binary number: 11011
Decimal equivalent: 27
```

## Explanation of Example
- **Binary `11011`**:
  - Start from the least significant bit:
    - `1 × 2^0 = 1`
    - `1 × 2^1 = 2`
    - `0 × 2^2 = 0`
    - `1 × 2^3 = 8`
    - `1 × 2^4 = 16`
  - Sum = `1 + 2 + 0 + 8 + 16 = 27`
- The program calculates this iteratively to produce the decimal value.