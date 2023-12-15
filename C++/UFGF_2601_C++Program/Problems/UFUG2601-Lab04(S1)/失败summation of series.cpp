#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n=1;
    double sn=0;
    int k=0;
    cin>>k;
   while(sn<=k)
    {
        sn+=(1/n);
        n++;
        // cout<<"sn="<<sn<<endl;
        // cout<<"n="<<n<<endl;
    }
    cout<<n-1<<endl;
    cout<<"sn="<<sn<<endl;
    return 0;
}