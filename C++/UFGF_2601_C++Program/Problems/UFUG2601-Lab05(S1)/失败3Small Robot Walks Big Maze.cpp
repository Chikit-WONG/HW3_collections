#include<iostream>
#include<vector>

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

vector<vector<bool>> ChangeMaze(vector<vector<char>> &maze)
{
    vector<vector<bool>>  realMaze;
    
}



bool CheckPoint(vector<vector<char>> &maze)
{

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
    bool canReach = CheckPoint(maze);

    // Print the result
    if (canReach) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}