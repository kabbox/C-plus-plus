# Reverse an Array

This project is a simple C++ program that reverses the order of elements in an array and displays both the original and reversed arrays.

## What is included in this program?

- The program prompts the user to enter the size of the array.
- It asks the user to input all elements of the array.
- The program creates a copy of the array with elements in reverse order.
- It displays both the original array and the reversed array.

## Features

- Dynamic array size based on user input.
- User input for all array elements.
- Creates a reversed copy without modifying the original array.
- Displays both original and reversed arrays for comparison.

## Example Usage

```
Enter Array Size: 5
Enter array Elements: 10 20 30 40 50
Previous Array Order = 10 20 30 40 50
Reversed Array order = 50 40 30 20 10
```

## How it works

1. The program asks the user to enter the array size.
2. It creates an array of the specified size.
3. The user enters all elements of the array using a loop.
4. The program creates a second array (`copyArr`) to store the reversed elements.
5. Using a loop, it copies elements from the original array to the copy array in reverse order.
6. It displays the original array first, then the reversed array.

## Algorithm

1. Read array size and elements into the original array.
2. Create a copy array of the same size.
3. For each position `i` in the copy array, assign the element from position `n-i-1` of the original array.
4. Display both arrays.

## Purpose

This program is designed for beginners to practice:

- Working with arrays in C++
- Using loops for array manipulation
- Understanding array indexing and reverse indexing
- Learning array copying techniques
- Input/output operations with arrays
