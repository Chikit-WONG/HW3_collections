#include <iostream>
#include <vector>
using namespace std;
// 定义is_valid函数，判断当前位置是否可以放置皇后
bool is_valid(vector<int> &cols, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (cols[i] == col || abs(cols[i] - col) == abs(i - row))
        {
            return false;
        }
    }
    return true;
}

void solve_n_queens(int n, int row, vector<int> &cols, int &count)
{
    if (row == n)
    {
        count++;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (is_valid(cols, row, col))
        {
            cols[row] = col;
            solve_n_queens(n, row + 1, cols, count);
            cols[row] = -1;
        }
    }
}
// 用来计算n皇后问题的解法数
int n_queens(int n)
{
    int count = 0;
    vector<int> cols(n, -1);
    solve_n_queens(n, 0, cols, count);
    return count;
}
// 主函数
int main()
{
    int n = 4; // 棋盘的大小
    int count = n_queens(n);
    cout << "The number of solutions for " << n << "-queens problem is " << count << endl;
    return 0;
}