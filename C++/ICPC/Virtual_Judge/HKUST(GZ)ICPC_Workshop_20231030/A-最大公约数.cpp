#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    int result=gcd(b,b%a);
    return result;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<result<<endl;
    return 0;
}