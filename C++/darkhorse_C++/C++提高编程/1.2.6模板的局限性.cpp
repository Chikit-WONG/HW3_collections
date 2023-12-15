#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    Person(string name,int age):m_Name(name),m_Age(age){}

    string m_Name;
    int m_Age;
};

class Person2
{
public:
    Person2(string name,int age):m_Name(name),m_Age(age){}

    string m_Name;
    int m_Age;
};

template<typename T>
bool myCompare(T &a,T &b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// template<> bool myCompare(Person &a,Person &b)
// {
//     if(a.m_Name == b.m_Name && a.m_Age == b.m_Age)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

bool myCompare(Person &a,Person &b)
{
    if(a.m_Name == b.m_Name && a.m_Age == b.m_Age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test01()
{
    Person p1("appple",18);
    Person p2("banana",20);
    cout<<myCompare(p1,p2)<<endl;;
}

int main()
{
    test01();
    return 0;
}