#include<iostream>
using namespace std;
int main()
{
    int *p;
    int a=10;
    *p=a;
    cout<<"*p="<<*p<<endl;
    cout<<"p="<<p<<endl;
    cout<<"&a="<<&a<<endl;
    return 0;
}