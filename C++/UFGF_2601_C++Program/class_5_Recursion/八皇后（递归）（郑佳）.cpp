#include <iostream>
#include <vector>
using namespace std;

const int N = 8; // 棋盘大小
vector<int> queens(N); // 存储每行皇后所在的列号

void print_solution() // 输出当前解
{
    for (int i = 0; i < N; ++i)
    {
        // 通过char('a' + queens[i])将列号转换为字母
        cout << char('a' + queens[i]) << i + 1 << " ";
    }
    cout << endl;
}

bool is_valid(int row, int col) // 判断当前位置是否合法
{
    for (int i = 0; i < row; ++i)
    { // 第一个条件检查第row行之前行中放置的皇后是否与当前皇后在同一列上。
        // 第二个条件检查第row行之前行中放置的皇后是否与当前皇后在同一西北-东南对角线上。
        // 第三个条件检查第row行之前行中放置的皇后是否与当前皇后在同一东北-西南对角线上。
        if (queens[i] == col || queens[i] - i == col - row || queens[i] + i == col + row)
        {
            return false;
        }
    }
    return true;
}

void solve(int row) // 递归求解八皇后问题
{
    if (row == N) // 找到一个解
    {
        print_solution();
        return;
    }
    for (int col = 0; col < N; ++col) // 枚举当前行的所有列
    {
        if (is_valid(row, col)) // 如果当前位置合法
        {
            queens[row] = col; // 放置皇后
            solve(row + 1);    // 递归求解下一行
        }
    }
}

int main()
{
    solve(0); // 从第一行开始求解
    return 0;
}