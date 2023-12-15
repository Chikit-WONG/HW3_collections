#include<iostream>
using namespace std;
class Person
{
    friend ostream& operator<<(ostream &out,Person &p);
    friend void test01();
private:
    int m_A;
    int m_B;
};

ostream& operator<<(ostream &out,Person &p)
{
    out<<"m_A="<<p.m_A<<" m_B="<<p.m_B;
    return out;
}

void test01()
{
    Person p;
    p.m_A=10;
    p.m_B=10;
    cout<<p<<endl;
}

int main()
{
    test01();
    return 0;
}