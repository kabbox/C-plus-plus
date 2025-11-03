# Reverse an Array (Without Extra Space)

This project is a simple C++ program that reverses an array in-place without using any extra space for another array.

## What is included in this program?

- The program prompts the user to enter the size of the array.
- It asks the user to input all elements of the array.
- The program displays the original array.
- It reverses the array in-place using the two-pointer technique.
- The reversed array is displayed.

## Features

- Dynamic array size based on user input.
- In-place array reversal (no extra space required).
- Uses two-pointer technique for efficient reversal.
- Displays both original and reversed arrays.
- Space-optimized solution.

## Example Usage

```
Enter Array Size: 5
Enter array Elements: 10 20 30 40 50
Your Array : 10 20 30 40 50
Reversed Array: 50 40 30 20 10
```

## How it works

1. The program asks the user to enter the array size.
2. It creates an array of the specified size.
3. The user enters all elements of the array.
4. The original array is displayed.
5. Two pointers (`start` and `end`) are initialized at the beginning and end of the array.
6. Elements at `start` and `end` positions are swapped.
7. `start` is incremented and `end` is decremented.
8. This process continues until `start` >= `end`.
9. The reversed array is displayed.

## Algorithm (Two-Pointer Technique)

1. Initialize `start = 0` and `end = n-1`.
2. While `start < end`:
   - Swap elements at positions `start` and `end`.
   - Increment `start`.
   - Decrement `end`.
3. The array is now reversed in-place.

## Space & Time Complexity

- **Time Complexity**: O(n/2) ≈ O(n)
- **Space Complexity**: O(1) - No extra space required
- **Advantage**: Memory efficient compared to creating a copy array

## Alternative Approach

The program mentions that we can also use a `swap(start, end)` function for the same purpose, which would make the code more readable.

## Purpose

This program is designed for beginners to practice:

- Working with arrays in C++
- Understanding in-place algorithms
- Learning the two-pointer technique
- Space-efficient programming
- Array manipulation without extra memory
