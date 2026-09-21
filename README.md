# CodeAlpha_Sudoku_Solver
C++ Sudoku Solver developed for CodeAlpha Internship Task 3.
# CodeAlpha Sudoku Solver

A C++ based Sudoku Solver developed for the CodeAlpha C++ Programming Internship — Task 3.

## 📌 Project Overview

This is a console-based Sudoku Solver developed in C++. The program represents a Sudoku puzzle using a 9×9 two-dimensional array and solves it automatically using recursion and backtracking.

## ✨ Features

- 9×9 Sudoku grid
- 2D array representation
- User input for Sudoku puzzle
- 0 represents empty cells
- Row validation
- Column validation
- 3×3 subgrid validation
- Recursive solving
- Backtracking algorithm
- Displays original Sudoku
- Displays solved Sudoku
- Handles puzzles with no solution

## 🧠 Algorithm Used

The project uses the **Backtracking Algorithm**.

The program:

1. Finds an empty cell.
2. Tries numbers from 1 to 9.
3. Checks whether the number is valid.
4. Places the number if valid.
5. Recursively solves the remaining cells.
6. If the solution fails, it removes the number and tries another value.

## 🛠️ Technologies Used

- C++
- 2D Arrays
- Functions
- Recursion
- Backtracking
- Conditional Statements
- Loops

## ▶️ How to Run

1. Download or clone this repository.
2. Open `Sudoku_Solver.cpp` in a C++ compiler.
3. Compile the program.
4. Run the program.
5. Enter the 9×9 Sudoku grid.
6. Use `0` for empty cells.
7. The program will display the solved Sudoku if a solution exists.

## 📋 Sample Input

```text
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
