#include<iostream>
using namespace std;
int main()
{
    
    double x;
    cout<<"Input x."<<endl;
    cin>>x;
    if(0<=x&&x<=100)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    system("pause");
    return 0;
}
