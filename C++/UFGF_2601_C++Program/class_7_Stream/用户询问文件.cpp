#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test1()
{
    ofstream ofs;
    string name;
    cout<<"Please enter the filename that you want to write:"<<endl;
    cin>>name;
    ofs.open(name.c_str(),ios::out);
    cout<<"When you want to append new things,you first need to enter 1"<<endl;
    unsigned short n;
    string add;
    cin>>n;
    while(n==1)
    {
        ofs<<add<<endl;
        cin>>n;
    }
    ofs.close();
}

void  test2()
{
    ifstream ifs;
    string name;
    cout<<"Please enter the filename that you want to read:"<<endl;
    
}
int main()
{
    unsigned short n;
    cout<<"Please enter a number to select the function you need:";
    cin>>n;
    switch (n)
    {
    case 1:
       {
        test1();
        break;
       }
    
    default:
    {
        cout<<"Bye bye"<<endl;
        break;
    }

       
    }
}