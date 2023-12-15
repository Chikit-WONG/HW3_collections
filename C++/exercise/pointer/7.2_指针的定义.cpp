#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<int(*p)<<endl;
    return 0;
}