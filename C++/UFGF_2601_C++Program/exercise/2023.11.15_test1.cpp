#include<iostream>
using namespace std;
int main()
{
int i = 42;
int &r = i; // &
int *p; // *
p = &i; // &
*p = i; // *
int &r2 = *p; // & and *
cout<<r2<<endl;
return 0;
}