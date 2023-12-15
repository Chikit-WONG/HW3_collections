#include<iostream>
using namespace std;

class Person
{
public:
    static int m_a;
    static void func()
    {
        cout<<m_a<<endl;
        m_a=200;
        cout<<m_a<<endl;

    }

   
};
int Person::m_a=100;


void test01()
{
    cout<<Person::m_a<<endl;
    Person::func();
}

int main()
{
    test01();
    return 0;
}