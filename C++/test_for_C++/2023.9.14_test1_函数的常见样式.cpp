#include<iostream>
using namespace std;
    void test01 ()
    {
        cout<<"this is test01"<<endl;

    }
    void test02(int a)
    {
        cout<<"this is test02"<<endl;
        cout<<"a="<<a<<endl;
    }
    int test03()
    {
        cout<<"this is test03"<<endl;
        return 10;
    }
    int test04(int a,int c)
    {
        cout<<"this is test04"<<endl;
        int sum=a+c;
        return sum;
    }

int main()

{
   
    test01();
    test02(5);
    test03();
    int num1=test03();
    cout<<num1<<endl;
    int num2=test04(10,20);
    cout<<"num2="<<num2<<endl;


    
    return 0;
}
