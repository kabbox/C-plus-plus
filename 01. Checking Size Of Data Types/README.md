# Checking Size Of Data Types

This program demonstrates how to check the size (in bytes) of various fundamental data types in C++. It prints the size of types such as `int`, `float`, `double`, `char`, and others to the console.

## Usage

1. Open the `code.cpp` file to view or modify the source code.
2. Build and run the program using your preferred C++ compiler (e.g., g++).
3. The output will display the size of each data type.

## Purpose

This program is useful for understanding how much memory is allocated for different data types on your system, which can vary depending on the compiler and architecture.

## Example Output

```
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte
...etc.
```

## How it is working

The program uses the built-in C++ operator `sizeof` to determine the memory size (in bytes) of each fundamental data type. Here’s how it works:

1. For each data type (like `int`, `char`, `float`, etc.), the program calls `sizeof(type)` to get its size in bytes.
2. The result is stored in a variable (e.g., `intSize = sizeof(int);`).
3. The program then prints out the size of each data type using `cout`.
4. This allows you to see how much memory each type occupies on your system, which can vary depending on the compiler and architecture.

The code is simple and does not require any user input. Just compile and run to see the results.

## Why is `int` used for storing the size values?

In this program, variables like `intSize`, `charSize`, etc., are declared as `int` to store the result of the `sizeof` operator. The `sizeof` operator in C++ actually returns a value.
