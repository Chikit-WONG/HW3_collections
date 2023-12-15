#include<iostream>
#include<string>
#include<set>

using namespace std;

class Person
{
public:
    Person(string name,int age):m_Name(name),m_Age(age){}

    string m_Name;
    int m_Age;
};

class ComparePerson
{
public:
    bool operator()(const Person &p1,const Person &p2)
    {
        return p1.m_Age<p2.m_Age;
    }
};

void printSetPerson(const set<Person,ComparePerson> &p)
{
    for(set<Person,ComparePerson>::const_iterator it=p.begin();it!=p.end();it++)
    {
        cout<<"name: "<<it->m_Name<<" age: "<<it->m_Age<<endl;
    }
}

void test01()
{
    set<Person,ComparePerson> p;

    for(int i=0;i<4;i++)
    {
        char c=(97+i);
        string name(3,c);
        p.insert(Person(name,i));
    }

    printSetPerson(p);
}

int main()
{
    test01();

    return 0;
}