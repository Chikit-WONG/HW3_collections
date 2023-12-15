#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"please enter the half height of the rhombus"<<endl;
    int n=0;
    cin>>n;
    for(int i = 0; i< 2 * n; i++) // ¿ØÖÆÐÐÊý
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (abs(i - n) + abs(j - n) == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}