#include<iostream>
#include<cstdio>
using namespace std;
double sum=0;
int main()
{
    double k;
    cin>>k;
    for(double n=1;n<=1000000;++n)
    {
        sum=sum+1/n;
        if(sum>k)
        {
            cout<<n;
            return 0;
        }
    }
}