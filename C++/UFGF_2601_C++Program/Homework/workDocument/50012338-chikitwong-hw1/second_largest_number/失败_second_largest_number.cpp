#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    int arr[n];
    if(n>(pow(2,20)))
    {
        cout<<"The numbers of the set were put to many!"<<endl;
        return 0;
    }
    if (cin.fail())
    {
        cout << "The input is not valid." << endl;
    }
    else
    {
        if (0 <= n && n <= 2e31 - 1)
        {
            
            for (int i = 0; i < n; i++)
            {
                cin >> a;
                arr[i] = a;
            }
            for (int i = 0; i <= -1; i++)
            {
                for (int j = 0; j < -i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << arr[n - 2] << endl;
        }
        else
        {
            cout << "The input is not valid." << endl;
        }
    }

    return 0;
}