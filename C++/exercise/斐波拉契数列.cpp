#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int a=1,b=1;
    cout<<a<<" "<<b<<" ";
    int c=0;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}