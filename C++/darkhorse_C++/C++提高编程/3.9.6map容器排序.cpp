#include<iostream>
#include<map>
#include<string>

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

void printMapPerson(const map<Person,int,ComparePerson> &m)
{
    for(map<Person,int,ComparePerson>::const_iterator it=m.cbegin();it!=m.cend();it++)
    {
        cout<<"key(name: "<<it->first.m_Name<<" age: "<<it->first.m_Age<<")  value: "<<it->second<<endl;
    }
    cout<<endl;
}

//自定义数据类型排序
void test01()
{
    map<Person,int,ComparePerson> m;

    for(int i=0;i<4;i++)
    {
        char c=97+i;
        string name(3,c);

        int age=18+i;

        m.insert(make_pair(Person(name,age),i));
    }

    printMapPerson(m);
}

int main()
{
    test01();

    return 0;
}