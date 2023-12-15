#include<iostream>
using namespace std;
int main()
{
    enum Work
    {
        A=-100,
        B=114514,
        C
    }work2;

    cout<<A<<endl;
    Work work=A;
    work2=B;
    cout<<work2<<endl;
    cout<<work<<endl;
    cout<<C<<endl;
    return 0;
}