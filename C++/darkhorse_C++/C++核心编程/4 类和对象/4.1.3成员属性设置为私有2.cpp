#include<iostream>
#include<string>
using namespace std;
class Person
{
    public:
        void setAge()
        {
            cout<<"Please enter an name:";
            cin>>m_name;
        }

        void getAge()
        {
            cout<<"name:"<<m_name<<endl;
        }

    private:
        string m_name;
};

int main()
{
    Person p1;
    p1.setAge();
    p1.getAge();
    return 0;
}