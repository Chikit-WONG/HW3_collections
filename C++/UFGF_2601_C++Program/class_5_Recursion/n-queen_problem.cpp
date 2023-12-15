#include <iostream>
#include <vector>

using namespace std;

// Function to check if a queen can be placed at board[row][col]
bool isSafe(vector<vector<int>>& board, int row, int col, int N) {
    // Check the left side of the current row
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) {
            return false;
        }
    }

    // Check the upper diagonal on the left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check the lower diagonal on the left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

// Recursive function to solve the N-Queen problem
bool solveNQueensUtil(vector<vector<int>>& board, int col, int N) {
    // Base case: If all queens are placed, return true
    if (col == N) {
        return true;
    }

    // Try placing the queen in each row of the current column
    for (int row = 0; row < N; row++) {
        // Check if the queen can be placed at board[row][col]
        if (isSafe(board, row, col, N)) {
            // Place the queen
            board[row][col] = 1;

            // Recur to place the rest of the queens
            if (solveNQueensUtil(board, col + 1, N)) {
                return true;
            }

            // Backtrack: If placing the queen doesn't lead to a solution, remove it
            board[row][col] = 0;
        }
    }

    // If the queen cannot be placed in any row of the current column, return false
    return false;
}

// Function to solve the N-Queen problem and print the solutions
void solveNQueens(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (solveNQueensUtil(board, 0, N)) {
        // Print the solutions
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }
}

int main() {
    int N;
    cout << "Enter the size of the chessboard (N): ";
    cin >> N;

    solveNQueens(N);

    return 0;
}