#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T, L, start, end;
    cin >> T;
    int arr[1000];
    string arr2[1000];
    for (int i = 0; i < T; i++)
    {
        cin >> L;

        cin >> start >> end;
        for (int j = 0; j < L; j++)
        {
            cin >> arr[j];
        }

        string output = "UP";
        int count = 0;
        int same = 0;

        for (int j = start; j <= end - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                output = "DOWN";
                break;
            }
            if (arr[j] == arr[j + 1])
            {
                same++;
            }

            count++;
        }
        if (same == (end - start))
        {
            output = "UP&DOWN";
        }

        for (int j = count; j <= end - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                output = "UP&DOWN";
                break;
            }
        }

        arr2[i] = output;
    }

    for (int i = 0; i < T; i++)
    {
        cout << arr2[i] << endl;
    }
    return 0;
}
