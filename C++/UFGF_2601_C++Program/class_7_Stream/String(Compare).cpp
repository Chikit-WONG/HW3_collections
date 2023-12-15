#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1("green apple");
    string str2("red apple");
    if(str1.compare(str2)!=0)
    {
        cout<<str1<<" is not "<<str2<<endl;
    }
    cout<<str1.compare(str2)<<endl;
    if(str1.compare(6,5,"apple")==0)
    {
        cout<<str1<<"is anapple\n";
    }
    if(str2.compare(sizeof(str2)-5,5,"apple")==0)
    {
        cout<<str1<<"is anapple\n";
    }
    if(str1.compare(6,5,str2,4,5)==0)
    {
        cout<<"Therefore, both are apples\n";
    }
    return 0;
}
