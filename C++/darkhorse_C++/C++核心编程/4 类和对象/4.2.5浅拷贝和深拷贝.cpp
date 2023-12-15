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
    //为什么进行了浅拷贝这个程序还能运行？
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
    cout<<"p1的年龄是:"<<p1.m_age<<"身高:"<<*p1.m_height<<"p1身高的地址:"<<p1.m_height<<endl;
    cout<<"p2的年龄是:"<<p1.m_age<<"身高:"<<*p2.m_height<<"p2身高的地址:"<<p2.m_height<<endl;
}

int main()
{
    test01();
    return 0;
}