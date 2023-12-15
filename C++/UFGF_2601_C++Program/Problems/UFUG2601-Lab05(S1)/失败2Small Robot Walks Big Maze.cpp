#include <iostream>
#include <vector>

using namespace std;

bool explore(vector<vector<char>>& maze, vector<vector<bool>>& visited, int row, int col, int rows, int cols) {
    // Check if current cell is out of bounds or a wall or already visited
    if (row >= rows || col >= cols || maze[row][col] == 'w' || visited[row][col]) {
        return false;
    }

    // Check if current cell is the destination
    if (row == rows - 1 && col == cols - 1) {
        return true;
    }

    // Mark current cell as visited
    visited[row][col] = true;

    // Recursively explore down and right directions
    return explore(maze, visited, row + 1, col, rows, cols) || explore(maze, visited, row, col + 1, rows, cols);
}

bool canReachEnd(vector<vector<char>>& maze) {
    int rows = maze.size();
    int cols = maze[0].size();

    // Create a 2D boolean array to track visited cells
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    // Start exploring from the top left corner
    return explore(maze, visited, 0, 0, rows, cols);
}

int main() {
    int A, B;
    cin >> A >> B;

    vector<vector<char>> maze(A, vector<char>(B));

    // Read the maze description
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cin >> maze[i][j];
        }
    }

    // Check if robot can reach the bottom right corner
    bool canReach = canReachEnd(maze);

    // Print the result
    if (canReach) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}