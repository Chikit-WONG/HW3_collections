#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,2,5,4};
    cout<<"逆转之前的元素："<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        ++start;
        --end;
    }
    cout<<"逆置后的元素是："<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}