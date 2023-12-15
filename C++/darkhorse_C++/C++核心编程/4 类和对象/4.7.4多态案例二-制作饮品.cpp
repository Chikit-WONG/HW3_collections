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
            cout<<"煮农夫山泉!"<<endl;
        }

        void Brew()
        {
            cout<<"冲泡咖啡!"<<endl;
        }

        void PourInCup()
        {
            cout<<"将咖啡倒入杯中!"<<endl;
        }

        void PutSomething()
        {
            cout<<"加入牛奶!"<<endl;
        }
};

class Tea:public Base
{
    public:
        void Boil()
        {
            cout<<"煮自来水!"<<endl;
        }

        void Brew()
        {
            cout<<"冲泡茶叶!"<<endl;
        }

        void PourInCup()
        {
            cout<<"将茶水倒入杯中!"<<endl;
        }

        void PutSomething()
        {
            cout<<"加入枸杞!"<<endl;
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