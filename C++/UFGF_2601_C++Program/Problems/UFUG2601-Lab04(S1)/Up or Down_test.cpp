#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int L, start, end;
        cin >> L >> start >> end;
        int arr[L];
        for (int j = 0; j < L; j++)
        {
            cin >> arr[j];
        }
        string output = "UP";
        int count = 0;
        for (int j = start; j < end; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                output = "DOWN";
                break;
            }
            count++;
        }
        for (int j = start ; j < end; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                output = "UP&DOWN";
                break;
            }
        }
        cout << output << endl;
    }
    return 0;
}


 //  for (int j = 0; j < L; j++)
        // {
        //     cout<<arr[j]<<endl;
        // }
        