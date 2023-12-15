#include<iostream>
using namespace std;
int main()
{
    int i=1,s=0;
    while(i<=10)
    {
        cout<<s<<endl;
        s+=i;
        ++i;
    }
    return 0;
}