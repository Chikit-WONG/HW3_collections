#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    int num=100;
    do
    {
        int a=0,b=0,c=0;
        a=num%10;
        b=num/10%10;
        c=num/100;
        if(pow(a,3)+pow(b,3)+pow(c,3)==num)
        {
            cout<<num<<" is daffodill number"<<endl;
        }
    // cout<<num<<endl;
    ++num;
    }
    while(num<1000);
    // int a=0,b=0,c=0;
    //     a=num%10;
    //     b=num/10%10;
    //     c=num%100;
    //     cout<<"a="<<a<<endl;
    //     cout<<"b="<<b<<endl;
    //     cout<<"c="<<c<<endl;
    system("pause");
    return 0;

}