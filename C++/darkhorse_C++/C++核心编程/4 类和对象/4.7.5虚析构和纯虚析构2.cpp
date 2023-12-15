#include <iostream>
#include<string>
using namespace std;
class Animal
{
    public:
    Animal()
    {
        cout << "Animal构造函数的调用" << endl;
    }
    virtual ~Animal()
    {
        cout << "Animal构造函数的调用" << endl;
    }

    virtual void speak()=0;
};

class Cat:public Animal
{
    public:
    Cat(string name)
    {
        cout << "Cat构造函数的调用"<<endl;
        m_Name=new string(name);
    }

    ~Cat()
    {
        cout<<"Cat析构函数的调用"<<endl;
        if(m_Name!=NULL)
        {
            delete m_Name;
            m_Name=NULL;
        }
    }

    void speak()
    {
        cout<<*m_Name<<"再说话"<<endl;
    }

    string *m_Name;
};

void test01()
{
    Animal *animal=new Cat("Tom");
    animal->speak();
    delete animal;


}

int main()
{
    test01();
    return 0;
}
