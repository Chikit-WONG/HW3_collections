#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    void setAge(int age)
    {
        if (age<0||age>150)
        {
            cout<<"What the hell you are."<<endl;
            m_Age=0;
            return;
        }
        m_Age=age;
    }

    int getAge()
    {
        return m_Age;
    }

private:
    int m_Age;
};

int main()
{
    Person p1;
    p1.setAge(100);
    cout<<p1.getAge()<<endl ;
    return 0;
}