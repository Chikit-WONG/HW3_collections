#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    const int *p1 =&a;
    p1=&b;
    int * const p2=&a;
    *p2=100;
    const int * const p3=&a;
    
    return 0;

}