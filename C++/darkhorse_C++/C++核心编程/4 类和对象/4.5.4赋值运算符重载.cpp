#include<iostream>
using namespace std;
class Person
{
public:
    Person(int age);
    Person& operator=(Person &p)
    {
        if(m_age!=NULL)
        {
            delete m_age;
            m_age=NULL;
        }
        m_age=new int(*p.m_age);
        return *this;
    }

    
    int *m_age;

    ~Person()
    {
        if(m_age!=NULL)
        {
            delete m_age;
            m_age=NULL;
        }
    }
};

Person::Person(int age)
{
    m_age=new int(age);
}

void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);
    p3=p2=p1;
    cout<<"p1="<<*p1.m_age<<endl;
    cout<<"p2="<<*p2.m_age<<endl;
    cout<<"p3="<<*p3.m_age<<endl;
}

int main()
{
    test01();
    return 0;
}
