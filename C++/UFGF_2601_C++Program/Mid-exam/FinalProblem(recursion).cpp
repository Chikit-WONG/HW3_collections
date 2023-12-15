#include <iostream>
#include <vector>
using namespace std;

void printClock(const vector<vector<int>> &arr)
{

    static size_t n = arr[0].size();
    static const size_t count = arr[0].size();
    if (count % 2 != 0 && n == count / 2 + 1)
    {
        cout << arr[count - n][count - n];
        return;
    }
    for (size_t i = count - n; i < n - 1; i++)
    {
        cout << arr[count - n][i] << " ";
    }
    for (size_t i = count - n; i < n - 1; i++)
    {
        cout << arr[i][n - 1] << " ";
    }
    for (size_t i = n - 1; i >= count - n + 1; i--)
    {
        cout << arr[n - 1][i] << " ";
    }
    for (size_t i = n - 1; i >= count - n + 1; i--)
    {
        cout << arr[i][count - n] << " ";
    }
    if (count % 2 == 0 && n == count / 2)
    {
        return;
    }
    n--;
    printClock(arr);
}

int main()
{
    int N = 2;
    cin >> N;
    vector<vector<int>> arr(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    printClock(arr);
    return 0;
}
