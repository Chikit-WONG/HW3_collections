#include<iostream>
using namespace std;
int main()
{   
    int a=1,b=1;
    for (int i = 0; i < 10; ++i) 
    {
        cout<<a<<endl;
        a++;
    }
 for (int i = -10; i <= 10; i += 3)
        {
            cout<<b<<endl;
            b++;
        }
    return 0;
}