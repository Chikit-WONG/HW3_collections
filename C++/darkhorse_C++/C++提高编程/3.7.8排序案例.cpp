#include<iostream>
#include<list>
#include<string>

using namespace std;

class Person
{
    friend void printList(const list<Person> &l);
    friend bool myCompare(Person &p1,Person &p2);
public:
    Person(){}
    Person(string name,int age,int height,int weight):m_Name(name),m_Age(age),m_Height(height),m_Weight(weight){}
private:
    string m_Name;
    int m_Age;
    int m_Height;
    int m_Weight;
};

void printList(const list<Person> &l)
{
    for(list<Person>::const_iterator it=l.cbegin();it!=l.cend();it++)
    {
        cout<<"姓名："<<it->m_Name<<" 年龄："<<it->m_Age<<" 身高："<<it->m_Height<<" 体重："<<it->m_Weight<<endl;
    }
}

bool myCompare(Person &p1,Person &p2)
{
    if(p1.m_Age==p2.m_Age &&p1.m_Height==p2.m_Height)
    {
        return p1.m_Weight<p2.m_Weight;
    }
    else if(p1.m_Age==p2.m_Age)
    {
        return p1.m_Height>p2.m_Height;
    }
    else
    {
        return p1.m_Age<p2.m_Age;
    }
}

void test01()
{
    list<Person> l;

    Person p1("刘备", 35 , 175,65);
    Person p2("曹操", 45 , 180,75);
    Person p3("孙权", 40 , 170,98);
    Person p4("赵云", 25 , 190,32);
    Person p5("张飞", 35 , 175,45);
    Person p6("关羽", 35 , 200,114514);

    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);

    //测试
    //printList(l);

    l.sort(myCompare);

    printList(l);


}

int main()
{
    test01();
    return 0;
}