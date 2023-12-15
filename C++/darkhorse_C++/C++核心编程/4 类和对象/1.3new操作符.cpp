#include<iostream>
using namespace std;

int* func1()
{
    int *p1=new int(10);
    return p1;
}

int* func2()
{
    int *arr=new int[10];
    return arr;
}

int main()
{
    int *p1=func1();
    int *arr=func2();

    cout<<*p1<<endl;
    delete p1;
    for(int i=0;i<10;i++)
    {
        arr[i]=100+i;
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete[] arr;
    return 0;
}