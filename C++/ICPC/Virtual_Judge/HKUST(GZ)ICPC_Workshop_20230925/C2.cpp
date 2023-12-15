#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr0[3];
    int arr1[3]={0,0,0};
    for(int i=0;i<2;i++)
    {
        cin>>arr0[i];
    }
    arr0[2]=arr0[0]+arr0[1];
    for(int i=0;i<3;i++)
    {
        int reminder=0;
        int power=0;
        while(arr0[i]>0)
        {
            reminder=arr0[i]%10;
            if(reminder==0)
            {
                arr0[i]/=10;
               
            }
            else
            {
                arr1[i]+=reminder*pow(10,power);
                arr0[i]/=10;
                power++;
            }
        }
    }
    if(arr1[0]+arr1[1]==arr1[2])
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
