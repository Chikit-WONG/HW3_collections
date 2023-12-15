#include<iostream>
using namespace std;
int Finonacci(int n)
{
    if(n==0||n==1)
    {
        return n;
    }

    return Finonacci(n-1)+Finonacci(n-2);
}

int main()
{
    int a;
    cout<<"Please enter a number:"<<endl;
    cin>>a;
    cout<<Finonacci(a)<<endl;
    return 0;
}