#include<iostream>
#include<string>
using namespace std;

template<class NameType,class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age):m_Name(name),m_Age(age){}
    void showPerson()
    {
        cout<<"name: "<<m_Name<<" age: "<<m_Age<<endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

void printPerson1(Person<string,int> &p)
{
    cout<<"haha1"<<endl;
    p.showPerson();
}

template<class T1,class T2> 
void printPerson2(Person<T1,T2> &p)
{
    cout<<"haha2"<<endl;
    p.showPerson();
}

template<typename T>
void printPerson3(T &p)
{
    cout<<"haha3"<<endl;
    p.showPerson();
}

void test01()
{
    Person<string,int> p1("apple",19);
    printPerson1(p1);
    printPerson2(p1);
    printPerson3(p1); 
}

int main()
{
    test01();
    return 0;
}