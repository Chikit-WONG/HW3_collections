#include<iostream>
using namespace std;
int main()
{
    int arr[5]={100,200,300,400,500};
    int max=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"五只小猪的体重最大为："<<max<<endl;

}