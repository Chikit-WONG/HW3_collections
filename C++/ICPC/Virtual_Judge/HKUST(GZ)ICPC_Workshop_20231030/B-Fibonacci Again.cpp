#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        if(n==1)
        {
            return 11;
        }
        else
        {
            return 7;
        }
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    while(cin>>n)
    {
        int f=fib(n);
        cout<<(f%3==0?"yes":"no")<<endl;
    }
    return 0;
}
