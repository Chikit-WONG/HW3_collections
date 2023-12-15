#include <iostream>
#include <cmath>
using namespace std;
bool isBasedValid(int p, int q, int r, int base)
{
    int arr1[3] = {p, q, r};
    int arr2[3];

    for(int i=0;i<3;i++)
    {
        if(arr1[i]<1||arr1[i]>1e6)
        return false;
    }

    for (int i = 0; i < 3; i++)
    {
        int power = 0;
        int result = 0;
        while (arr1[i] > 0)
        {
            int remainder = arr1[i] % 10;
            if (remainder >= base)
            {
                return false;
            }
            result += remainder * pow(base, power);
            arr1[i]/= 10;
            power++;
        }
        arr2[i]=result;
    }
    
      

    return arr2[0] * arr2[1] == arr2[2];
}

int findSmallestBase(int p, int q, int r)
{
    for (int base = 2; base <= 16; base++)
    {
        if (isBasedValid(p, q, r, base))
        {
            return base;
        }
    }

    return 0;
}

int main()
{
    int p, q, r;
    cin >> p >> q >> r;
    int base = findSmallestBase(p, q, r);
    cout << base << endl;
    return 0;
}