#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    int d;
    d=(a>b)&&(b>=c);
    cout<<d<<endl;
    if((a>b)&&(b>=c))
    {
        cout<<"the request is achieve"<<endl;
    }
    else
    {
        cout<<"the request is not achieve"<<endl;
    }

    system("pause");
    return 0;
}