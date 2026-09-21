#include <iostream>
using namespace std;

const int SIZE = 9;

// Display Sudoku board
void displayBoard(int board[SIZE][SIZE]) {
    cout << "\n========== SUDOKU ==========\n";

    for (int row = 0; row < SIZE; row++) {
        if (row % 3 == 0 && row != 0)
            cout << "-------------------------\n";

        for (int col = 0; col < SIZE; col++) {
            if (col % 3 == 0 && col != 0)
                cout << "| ";

            cout << board[row][col] << " ";
        }

        cout << endl;
    }

    cout << "============================\n";
}

// Check whether a number can be placed
bool isValid(int board[SIZE][SIZE], int row, int col, int num) {

    // Check row
    for (int x = 0; x < SIZE; x++) {
        if (board[row][x] == num)
            return false;
    }

    // Check column
    for (int x = 0; x < SIZE; x++) {
        if (board[x][col] == num)
            return false;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

// Find an empty cell
bool findEmptyCell(int board[SIZE][SIZE], int &row, int &col) {

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {

            if (board[row][col] == 0)
                return true;
        }
    }

    return false;
}

// Solve Sudoku using backtracking
bool solveSudoku(int board[SIZE][SIZE]) {

    int row, col;

    // If there is no empty cell, Sudoku is solved
    if (!findEmptyCell(board, row, col))
        return true;

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++) {

        if (isValid(board, row, col, num)) {

            // Place number
            board[row][col] = num;

            // Recursively solve remaining cells
            if (solveSudoku(board))
                return true;

            // Backtrack
            board[row][col] = 0;
        }
    }

    return false;
}

int main() {

    int board[SIZE][SIZE];

    cout << "================================\n";
    cout << "        SUDOKU SOLVER\n";
    cout << "================================\n";

    cout << "\nEnter the Sudoku grid.\n";
    cout << "Use 0 for empty cells.\n\n";

    // Input Sudoku
    for (int row = 0; row < SIZE; row++) {

        cout << "Row " << row + 1 << " (9 numbers): ";

        for (int col = 0; col < SIZE; col++) {
            cin >> board[row][col];
        }
    }

    cout << "\nOriginal Sudoku:";
    displayBoard(board);

    // Solve Sudoku
    if (solveSudoku(board)) {

        cout << "\nSudoku solved successfully!";

        displayBoard(board);

    } else {

        cout << "\nNo solution exists for this Sudoku puzzle.\n";
    }

    return 0;
}
