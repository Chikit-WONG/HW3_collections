#include<iostream>
using namespace std;
int main()
{   
    int n=0;
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cout<<"|=";
    }
    cout<<"|"<<endl;
    return 0;
}