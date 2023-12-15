#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(arr[i]%2==0)
        {
            sum++;
        }
    }
    if(sum>1)
    {
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1<<endl;
            }
        }
    }
    else
    {
         for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}