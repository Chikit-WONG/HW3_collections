#include<iostream>
using namespace std;

template<typename T>
void selection_sort(T arr[],int &len)
{
    for(int i=0;i<len-1;i++)
    {
        int min=i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            std::swap(arr[min],arr[i]);
        }
    }
}

template<typename T>
void print(T arr,int &len)
{
    for(int i=0;i<len;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    int arr[]={1,5,7,9,8,6,8,7,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    print(arr,len);
    selection_sort(arr,len);
    print(arr,len);
}