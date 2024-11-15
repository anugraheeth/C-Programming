# Finding the Greatest of Three Numbers in C

## Overview
This program determines the greatest of three numbers using simple conditional statements (`if-else`). It compares the three numbers and identifies the largest.

## Purpose
The program helps understand how to use logical operators (`&&`) and conditional structures (`if`, `else if`, `else`) in C to solve decision-making problems.

## How It Works
1. Three integers `a`, `b`, and `c` are initialized.
2. The program compares the values:
   - If `a` is greater than both `b` and `c`, `a` is the greatest.
   - If `b` is greater than both `a` and `c`, `b` is the greatest.
   - Otherwise, `c` is the greatest.
3. The result is displayed using `printf`.

## Code
Here’s the implementation:

```c
#include <stdio.h>

int main() {
    int a = 4, b = 3, c = 7; // Initialize numbers
    printf("A = %d\nB = %d\nC = %d\n", a, b, c);

    // Determine the greatest number
    if (a > b && a > c)
        printf("A is the greatest\n");
    else if (b > a && b > c)
        printf("B is the greatest\n");
    else
        printf("C is the greatest\n");

    return 0;
}
```

## Compilation and Execution
To run the program:

1. Compile with:
   ```bash
   gcc largest.c -o GreatestOfThree
   ```
2. Execute with:
   ```bash
   ./GreatestOfThree
   ```

## Output
For the input values `a = 4`, `b = 3`, and `c = 7`, the output will be:

```
A = 4
B = 3
C = 7
C is the greatest
```

## Explanation of Example
- The program checks:
  - `a > b && a > c` → `4 > 3 && 4 > 7` → False.
  - `b > a && b > c` → `3 > 4 && 3 > 7` → False.
  - Else → `c` is the greatest.
- The result is `C is the greatest`. 

This straightforward logic can handle any values for `a`, `b`, and `c`.