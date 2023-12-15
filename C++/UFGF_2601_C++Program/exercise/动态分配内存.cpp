#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int *arr1=new int[n];
    int *arr2=new int[2*n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    delete[] arr1;
    arr1=arr2;
    n=2*n;
    delete[] arr2;
    return 0;
}