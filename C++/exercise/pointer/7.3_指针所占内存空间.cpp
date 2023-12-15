#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(int*)<<endl;
    cout<<sizeof(char*)<<endl;
    cout<<sizeof(a)<<endl;
    return 0;

}