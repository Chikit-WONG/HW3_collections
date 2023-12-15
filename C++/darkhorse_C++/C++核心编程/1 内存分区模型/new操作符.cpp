#include<iostream>
using namespace std;
int* test01()
{
    int *a=new int(10);
    return a;

}

int* test02()
{
    int *arr=new int[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=100+i;
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }

    delete[] arr;
}

int main()
{
    int *p=test01();
    cout<<*p<<endl;
    test02();
    return 0;


}