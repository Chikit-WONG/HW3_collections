#include<iostream>
using namespace std;
int main()
{
    double income=0;
    cout<<"Input the income"<<endl;
    cin>>income;
    if(cin.fail())
    {
        cerr<<"wrong type."<<endl;
    }
    else{  if(income>960000)
        {
            cout<<"Tax rate is 45"<<endl;
        
        }
        else if (660000<income&&income<=960000)
        {
            cout<<"Tax rate is 35"<<endl;
        }
        else if(420000<income&&income<=660000)
        {
            cout<<"Tax rate is 30"<<endl;
        }
        else if(300000<income&&income<=420000)
        {
            cout<<"Tax rate is 25"<<endl;
        }
        else if(144000<income&&income<=300000)
        {
            cout<<"Tax rate is 20"<<endl;
        }
        else if(36000<income&&income<=144000)
        {
            cout<<"Tax rate is 10"<<endl;
        }
        else if(0<=income&&income<=36000)
        {
            cout<<"Tax rate is 3"<<endl;
        }
        else
        {
            cerr<<"error"<<endl;
        
        }
    }
    system("pause");
    return 0;
}