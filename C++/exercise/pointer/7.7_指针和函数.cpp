#include<iostream>
using namespace std;

void swap02(int *p1,int*p2)
    {
        int temp=*p1;
        *p1=*p2;
        *p2=temp;

    }
int main()
{
    int a=10;
    int b=20;
    swap02(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}