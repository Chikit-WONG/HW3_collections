#include<iostream>
using namespace std;
class Base1
{
    public:
        int m_A;
        Base1()
        {
            m_A=100;
        }
};

class Base2
{
    public:
        int m_A;
        Base2()
        {
            m_A=200;
        }
};

class Son: public Base1,public Base2
{
    public:
        
        Son()
        {
            
            m_B=300;
            m_C=400;
        }
        int m_B,m_C;
};

void test01()
{
    Son son;
    
    cout<<sizeof(Son)<<endl;
    cout<<son.Base1::m_A<<endl;
}

int main()
{
    test01();
    return 0;
}