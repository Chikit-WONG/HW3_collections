#include<iostream>
using namespace std;
int main()
{
    bool p,q,r,x,y;
    cin>>p;
    cin>>q;
    cin>>r;
    x=(p&&q)||!r;
    y=!((p&&q)||!r);
    cout<<x<<endl;
    cout<<y<<endl;

    system("pause");
    return 0;

}