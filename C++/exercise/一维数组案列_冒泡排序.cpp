#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,8,0,5,7,1,6,3,9};
    int sum=sizeof(arr)/sizeof(arr[0]);
    cout<<"ÉýÐòÇ°£º"<<endl;
    for(int i=0;i<sum;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    for(int i=0;i<sum-1;i++)
    {
        for(int j=0;j<sum-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"ÉýÐòºó£º"<<endl;
    for(int i=0;i<sum;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }

}
