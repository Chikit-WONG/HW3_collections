#include<iostream>
using namespace std;
class  Base
{
    public:
        virtual void Boil()=0;
        virtual void Brew()=0;
        virtual void PourInCup()=0;
        virtual void PutSomething()=0;
};

class Coffee:public Base
{
    public:
        void Boil()
        {
            cout<<"��ũ��ɽȪ!"<<endl;
        }

        void Brew()
        {
            cout<<"���ݿ���!"<<endl;
        }

        void PourInCup()
        {
            cout<<"�����ȵ��뱭��!"<<endl;
        }

        void PutSomething()
        {
            cout<<"����ţ��!"<<endl;
        }
};

class Tea:public Base
{
    public:
        void Boil()
        {
            cout<<"������ˮ!"<<endl;
        }

        void Brew()
        {
            cout<<"���ݲ�Ҷ!"<<endl;
        }

        void PourInCup()
        {
            cout<<"����ˮ���뱭��!"<<endl;
        }

        void PutSomething()
        {
            cout<<"�������!"<<endl;
        }
};

void doWork(Base *drink)
{
    drink->Boil();
    drink->Brew();
    drink->PourInCup();
    drink->PutSomething();
}


void test01()
{
    doWork(new Coffee);
    cout<<"----------"<<endl;
    doWork(new Tea);
}

int main()
{
    test01();
    return 0;
}