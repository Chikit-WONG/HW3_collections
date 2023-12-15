#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}