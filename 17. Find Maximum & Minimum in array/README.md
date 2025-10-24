# Find Maximum & Minimum in Array

This project is a simple C++ program that finds both the maximum and minimum elements in an array of integers.

## What is included in this program?

- The program prompts the user to enter the size of the array.
- It asks the user to input all elements of the array.
- The program uses a loop to compare all elements and find both maximum and minimum values.
- Both the largest and smallest elements are displayed to the user.

## Features

- Dynamic array size based on user input.
- User input for all array elements.
- Uses a single loop to find both maximum and minimum elements efficiently.
- Simple comparison logic to determine both largest and smallest values.

## Example Usage

```
Enter Array Size: 5
Enter array Elements : 10 25 8 40 15
Array Maximum Is: 40
Array Minimum Is: 8
```

## How it works

1. The program asks the user to enter the array size.
2. It creates an array of the specified size.
3. The user enters all elements of the array.
4. The program initializes both `max` and `min` with the first element.
5. Using a `for` loop, it compares each element with both current maximum and minimum.
6. If any element is larger than the current maximum, it becomes the new maximum.
7. If any element is smaller than the current minimum, it becomes the new minimum.
8. After checking all elements, it displays both the largest and smallest values found.

## Algorithm

1. Initialize both `max` and `min` with the first array element.
2. Loop through all array elements.
3. Compare each element with `max` and `min`.
4. If current element > `max`, update `max`.
5. If current element < `min`, update `min`.
6. Display both final `max` and `min` values.

## Purpose

This program is designed for beginners to practice:

- Working with arrays in C++
- Using loops for array traversal
- Understanding comparison operations
- Learning basic array algorithms for finding extremes
- Efficient single-pass algorithm implementation
