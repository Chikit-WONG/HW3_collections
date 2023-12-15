#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    sum=n/100;
    sum=sum+n%100/20;
    sum=sum+n%100%20/10;
    sum=sum+n%100%20%10/5;
    sum=sum+n%100%20%10%5;
    cout<<sum<<endl;
    return 0;
}