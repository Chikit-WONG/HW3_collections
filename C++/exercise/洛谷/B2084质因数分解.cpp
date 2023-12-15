#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n > 6 && n < 1e9)
    {
        for (int i = 2; i <1e9; i++)
        {
            if (n % i == 0)
            {
                cout << n/i << endl;
                break;
            }
        }
    }
    return 0;
}