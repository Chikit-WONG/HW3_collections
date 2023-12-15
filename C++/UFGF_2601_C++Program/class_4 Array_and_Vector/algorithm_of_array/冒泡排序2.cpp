#include<iostream>
using namespace std;
int main()

{
    int temp=0;
    int arr[]={8,7,5,4,6,1,3,2};
    for(int a=0;a<sizeof(arr)/sizeof(arr[0]);a++)
    {
        cout<<arr[a]<<" ";
    }
    cout<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++)
    {
        for(int j=0;j<sizeof(arr)/sizeof(arr[0])-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int b=0;b<sizeof(arr)/sizeof(arr[0]);b++)
    {
        cout<<arr[b]<<" ";
    }

}