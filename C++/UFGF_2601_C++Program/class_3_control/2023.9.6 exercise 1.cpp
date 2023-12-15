#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double area;
    
    cout<<"Please input the number of the square area."<<endl;
    cin>>area;
    if(cin.fail())
    {
        cout<<"You input the error typ."<<endl;
    }
    else
    {
        if(area>=0)
        {
            double length=sqrt(area);
            cout<<"The side length of the square is "<<setprecision(20)<<length<<"."<<endl;

        }
        else
        {
            cerr<<"Error: Negative area."<<endl;
        }
    }
    system("pause");
    return 0;
}

