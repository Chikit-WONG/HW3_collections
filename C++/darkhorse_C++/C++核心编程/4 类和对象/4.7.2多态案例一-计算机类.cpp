#include<iostream>
using namespace std;
class AbstractCalculate
{
    public:
        virtual int getResult()
        {
            return 0;
        }
        int m_Num1;
        int m_Num2;
};


class AddCalculate:public AbstractCalculate
{
    public:
        int getResult()
        {
            cout<<"hi"<<endl;
            return m_Num1+m_Num2;
        }
};

class SubCalculate:public AbstractCalculate
{
    public:
        int getResult()
        {
            return m_Num1-m_Num2;
        }
};

class MulCalculate:public AbstractCalculate
{
    public:
        int getResult()
        {
            return m_Num1*m_Num2;
        }
};

void getResult2(AbstractCalculate &abc)
{
    cout<<abc.getResult()<<endl;
}

void test01()
{
    AbstractCalculate *abc=new AddCalculate;
    abc->m_Num1=10;
    abc->m_Num2=20;
    cout<<abc->getResult()<<endl;
    delete abc;

}

void test02()
{
    AddCalculate add;
    add.m_Num1=10;
    add.m_Num2=20;
    getResult2(add);
}

int main()
{
    // test01();
    test02();
    return 0;
}