#include<iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Calling non-parameter constructor"<<endl;
    }
    Person(int age,int height)
    {
        cout<<"Calling parameterized constructor."<<endl;
        m_age=age;
        m_height=new int(height);
    }
    // Person(const Person &p)
    // {
    //     cout<<"Calling copy constructor."<<endl;
    //     m_age=p.m_age;
    //     m_height=new int(*p.m_height);

    // }
    //Ϊʲô������ǳ����������������У�
    ~Person()
    {
        cout<<"Calling destructor function."<<endl;
        if(m_height!=NULL)
        {
            delete m_height;
            m_height=NULL;
        }
    }

    int m_age;
    int* m_height;
};

void test01()
{
    Person p1(10,160);
    Person p2(p1);
    cout<<"p1��������:"<<p1.m_age<<"���:"<<*p1.m_height<<"p1��ߵĵ�ַ:"<<p1.m_height<<endl;
    cout<<"p2��������:"<<p1.m_age<<"���:"<<*p2.m_height<<"p2��ߵĵ�ַ:"<<p2.m_height<<endl;
}

int main()
{
    test01();
    return 0;
}