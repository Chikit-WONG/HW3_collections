#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"Please input two strings."<<endl;
    cin>>a;
    cin>>b;
    if(a<b)
    {
        cout<<a<<" is less than "<<b<<"."<<endl;
    }
    else
    {
        cout<<b<<" is less than "<<a<<"."<<endl;
    }
    system("pause");
    return 0;
}