#include <iostream>
#include <vector>

using namespace std;

vector<int> StartAndEnd(vector<vector<char>> &maze,int &rows,int &cols)
{
    vector<int> StartEnd{0,0,0,0};

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(maze[i][j]=='o')
            {
                StartEnd[0]=i;
                StartEnd[1]=j;
                break;
            }
        }
    }

    for(int i=rows-1;i>=0;i--)
    {
        for(int j=cols;j>=0;j--)
        {
            if(maze[i][j]=='o')
            {
                StartEnd[2]=i;
                StartEnd[3]=j;
                break;
            }
        }
    }

    return StartEnd;
}

// Function to check if robot can reach the bottom right corner
bool canReachEnd(vector<vector<char>>& maze) {
    
    int rows = maze.size();
    int cols = maze[0].size();
    vector<int> StartEnd;

    StartEnd=StartAndEnd(maze,rows,cols);

    // Create a 2D boolean array to track visited cells
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    // Recursive function to explore the maze
    bool explore(int row, int col) 
    {
        // Check if current cell is out of bounds or a wall or already visited
        if (row >= rows || col >= cols || maze[row][col] == 'w' || visited[row][col]) {
            return false;
        }

        // Mark current cell as visited
        visited[row][col] = true;

        // Check if current cell is the destination
        if (maze[row][col] == 'o' && row==StartEnd[2] && col==StartEnd[3]) {
            return true;
        }

        // Recursively explore down and right directions
        return explore(row + 1, col) || explore(row, col + 1);
    }

    // Start exploring from the top left corner
    return result=explore(StartEnd[0], StartEnd[1]);

    
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