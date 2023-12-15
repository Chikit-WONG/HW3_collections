#include<iostream>
using namespace std;
class Person
{
public:
    Person(const Person &p)
    {
        m_age=p.m_age;
        m_age=1000;
        cout<<"Calling copy constructor."<<endl;
    }

    Person(int age)
    {
        m_age=age;
        cout<<"Calling invoking parameterized constructor."<<endl;
    }

    Person()
    {
        cout<<"Calling non-parameter constructor."<<endl;
    }

    ~Person()
    {
        cout<<"Calling destructor function."<<endl;
    }

    int m_age;
};

Person doWork()
{
    Person p1;
    p1.m_age=100;
    cout<<"p1="<<(int*)&p1<<endl;
    return p1;
}
void test01()
{
    Person man(100);
    Person newman1=man;
    cout<<"man="<<man.m_age<<endl;
    cout<<"&man="<<&man.m_age<<endl;
    cout<<"newman="<<newman1.m_age<<endl;
    cout<<"&newman="<<&newman1.m_age<<endl;

}

void test02()
{
    Person p;
    doWork();
}

void test03()
{
    Person p=doWork();
    cout<<p.m_age<<endl;
    cout<<"p="<<&p<<endl;
    
}

int main()
{
    test01();

    // test03();
    return 0;
}