# Swap.c

## Overview
`Swap.c` is a simple C program that demonstrates how to swap the values of two integers without using a temporary variable. This is achieved through arithmetic operations, specifically addition and subtraction.

## Purpose
The purpose of this program is to illustrate a common algorithmic technique for swapping values in programming, which can be useful in various scenarios where memory usage is a concern or when working in environments with limited resources.

## How It Works
The program initializes two integer variables, `a` and `b`, with values 5 and 8, respectively. It then prints the original values of these variables. The swapping is performed using the following steps:

1. **Addition**: The sum of `a` and `b` is stored in `a`.
2. **Subtraction**: The original value of `a` (now the sum) is used to calculate the new value of `b` by subtracting the new `a` from `b`.
3. **Subtraction Again**: The new value of `b` is subtracted from the new `a` to get the original value of `a`, which is assigned to `a`.

This method effectively swaps the values of `a` and `b` without the need for a temporary variable.

## Code Explanation
Here is the code for the program:

```
#include<stdio.h>
int main()
{
int a=5, b=8; // Initialize variables
printf("A = %d\nB = %d\n", a, b); // Print original values
// Swapping without a temporary variable
a = a + b; // Step 1: a now holds the sum of a and b
b = a - b; // Step 2: b now holds the original value of a
a = a - b; // Step 3: a now holds the original value of b
printf("Swapped =>\n");
printf("A = %d\nB = %d\n", a, b); // Print swapped values
}
```

## Compilation and Execution
To compile and run the program, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory where `Swap.c` is located.
3. Compile the program using the following command:
   ```bash
   gcc Swap.c -o Swap
   ```
4. Run the compiled program:
   ```bash
   ./Swap
   ```

## Output
When executed, the program will output the original and swapped values of `a` and `b` as follows:

```
A = 5
B = 8
Swapped =>
A = 8
B = 5
```

## Conclusion
This program serves as a basic example of value swapping in C without using a temporary variable. It highlights the use of arithmetic operations to achieve the desired result efficiently.