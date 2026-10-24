# Homework 3 - Arrays and Strings

Introductory C study solutions based on the course assignments and reference solutions.
Array exercises were adapted from guided Eclipse practice. String exercises are
reference-based study solutions for further practice.

Each folder contains a separate program with its own `main.c`.

| Folder | Exercise |
| --- | --- |
| EX1 | Add two 2x2 matrices |
| EX2 | Calculate an average using an array |
| EX3 | Transpose a user-sized matrix |
| EX4 | Insert an element at a chosen position |
| EX5 | Search for an element |
| Strings/EX1 | Count a character's frequency |
| Strings/EX2 | Find a string's length manually |
| Strings/EX3 | Reverse a string by swapping characters |

## Build and run

From an exercise folder, using GCC on Windows:

```text
gcc -std=c11 -Wall -Wextra main.c -o program.exe
.\program.exe
```

Compile each exercise separately.

## Input and output notes

- Enter numerical values without the semicolons shown in some PDF examples.
- Average and search accept 1 to 100 elements. Insertion accepts 1 to 99 original
  elements so one slot remains available. Positions start at 1.
- Transpose accepts 1 to 10 rows and columns; it retains the floating-point values
  used during practice and displays two decimal places.
- Strings accept a line of up to 998 simple characters, including spaces.
  `fgets` replaces the reference's `gets`. Character counting is case-sensitive.
- Length is counted manually. Reverse swaps characters inside the array; it uses
  `strlen` to obtain the length and does not use a string-reversal function.
- Basic conversion and range checks are included. Numeric inputs should fit their
  C types; these exercises are not full input-validation libraries.

## Verification

All eight programs compile as C11 with warnings treated as errors. Array exercises
and the frequency/length exercises were run against examples and edge cases.
The reversal exercise was compiled and reviewed, but local execution was blocked
by Windows application-control policy, so its runtime verification is pending.
