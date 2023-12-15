#include<iostream>
#include<string>
using namespace std;

template<class NameType,class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age):m_Name(name),m_Age(age){}

    NameType m_Name;
    AgeType m_Age;
};

void test01()
{
    Person<string,int> p("apple",18);
    cout<<p.m_Name<<" "<<p.m_Age<<endl;
}

int main()
{
    test01();
    return 0;
}