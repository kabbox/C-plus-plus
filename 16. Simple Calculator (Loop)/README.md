# Simple Calculator (Loop)

This project is a simple calculator program written in C++ that uses a loop to repeatedly perform arithmetic operations until the user chooses to exit.

## What is included in this program?

- The program displays a menu with options for Sum, Subtraction, Product, Divide, Remainder, and Exit.
- The user selects an operation by entering a number (1-6).
- For operations 1-5, the user is prompted to enter two numbers.
- The program performs the selected operation and displays the result.
- If the user selects Exit (6), the program ends.
- The program checks for division by zero and displays an error if attempted.
- The menu is shown again after each operation until the user chooses to exit.

## Features

- Supports addition, subtraction, multiplication, division, and modulus (remainder).
- Uses a `while(true)` loop to allow multiple calculations in one run.
- Input validation for division and modulus by zero.
- Clear and user-friendly output messages.

## Example Usage

```
Simple Calculator
What do you like to do?
1. Sum (+)
2. Subtraction (-)
3. Product (*)
4. Divide (/)
5. Remainder (%)
6. Exit
Enter your choice: 1
Enter First Number: 10
Enter Second Number: 5
Sum: 15

What do you like to do?
...
Enter your choice: 6
Exiting calculator. Goodbye!
```

## How it works

1. The program starts and displays a welcome message and menu.
2. The user selects an operation.
3. If not exiting, the user enters two numbers.
4. The program performs the operation and displays the result.
5. The menu is shown again until the user chooses to exit.

## Purpose

This program is designed for beginners to practice:

- Using loops in C++
- Handling user input and output
- Performing basic arithmetic operations
- Implementing input validation

## License

This project is for educational purposes.
