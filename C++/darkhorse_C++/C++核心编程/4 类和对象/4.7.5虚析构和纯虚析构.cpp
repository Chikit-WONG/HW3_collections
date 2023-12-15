#include<iostream>
#include<string>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            cout<<"Animal���캯������!"<<endl;
        }

        virtual ~Animal()
        {
            cout<<"Animal������������!"<<endl;

            
        }

        virtual void speak()=0;


};

class Cat:public Animal
{
    public:
        Cat(string name)
        {
            m_Name=new string(name);
            cout<<"Cat���캯���ĵ���!"<<endl;
        }

        ~Cat()
        {
            cout<<"Cat���������ĵ���!"<<endl;
            if(m_Name!=NULL)
            {
                delete m_Name;
                m_Name=NULL;
            }
        }

        void speak()
        {
            cout<<*m_Name<<"��˵��"<<endl;
            
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



