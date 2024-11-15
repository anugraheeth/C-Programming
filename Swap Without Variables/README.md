# Swap.c

## Overview
`Swap.c` is a simple C program that swaps the values of two integers without using a temporary variable, using only basic arithmetic operations.

## Purpose
The program shows how to swap two variables' values in place, a useful technique when memory is limited or efficiency is a priority.

## How It Works
The program defines two integers, `a = 5` and `b = 8`, and swaps their values using three steps:

1. **Addition**: Add `a` and `b` and store the result in `a`.
2. **Subtraction**: Subtract the new `b` from `a` to restore the original `a` value in `b`.
3. **Subtraction Again**: Subtract the new `b` from `a` to restore the original `b` value in `a`.

## Code
Here’s the code:

```c
#include <stdio.h>

int main() {
    int a = 5, b = 8;
    printf("Before Swap: A = %d, B = %d\n", a, b);

    a = a + b; // Step 1
    b = a - b; // Step 2
    a = a - b; // Step 3

    printf("After Swap: A = %d, B = %d\n", a, b);
    return 0;
}
```

## Compilation and Execution
To run the program:

1. Compile with `gcc Swap.c -o Swap`
2. Execute with `./Swap`

## Output
The program will output:

```
Before Swap: A = 5, B = 8
After Swap: A = 8, B = 5
```

This simple swap method is efficient and requires no extra memory.
