# Linear Search in Array

This project is a simple C++ program that implements linear search algorithm to find a specific element in an array.

## What is included in this program?

- The program prompts the user to enter the size of the array.
- It asks the user to input all elements of the array.
- The user enters a number to search for in the array.
- The program uses linear search to find the element and displays its position.

## Features

- Dynamic array size based on user input.
- User input for all array elements.
- Linear search implementation to find elements.
- Displays the position (1-based index) where the element is found.

## Example Usage

```
Enter Array Size : 5
Enter Array Elements: 10 25 8 40 15
Enter the Number To Search: 40
Number Found at Index 4
```

## How it works

1. The program asks the user to enter the array size.
2. It creates an array of the specified size.
3. The user enters all elements of the array using a loop.
4. The user enters the number they want to search for.
5. The program uses a loop to check each element sequentially.
6. If the element is found, it displays the position and breaks the loop.
7. The position is displayed as 1-based index (user-friendly).

## Algorithm (Linear Search)

1. Start from the first element of the array.
2. Compare each element with the target value.
3. If a match is found, return the position and stop.
4. If no match is found after checking all elements, the element is not in the array.

## Time Complexity

- Best Case: O(1) - Element found at first position
- Average Case: O(n/2) - Element found in middle
- Worst Case: O(n) - Element found at last position or not found

## Purpose

This program is designed for beginners to practice:

- Working with arrays in C++
- Understanding linear search algorithm
- Using loops for array traversal
- Learning basic searching techniques
- Input/output operations with arrays
