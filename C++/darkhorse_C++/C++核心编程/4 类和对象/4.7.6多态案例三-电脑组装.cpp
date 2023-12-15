#include<iostream>
using namespace std;
class CPU
{
    public:
        virtual void calculate()=0;
};

class VideoCard
{
    public:
        virtual void display()=0;
};

class Memory
{
    public:
        virtual void storage()=0;
};


class Computer
{
    public:
        CPU *m_cpu;
        VideoCard *m_vc;
        Memory *m_memory;

        Computer(CPU *cpu,VideoCard *vc,Memory *memory)
        {
            m_cpu=cpu;
            m_vc=vc;
            m_memory=memory;
        }

        ~Computer()
        {
            if(m_cpu!=NULL)
            {
                delete m_cpu;
                m_cpu=NULL;
            }

            if(m_vc!=NULL)
            {
                delete m_vc;
                m_vc=NULL;
            }

            if(m_memory!=NULL)
            {
                delete m_memory;
                m_memory=NULL;
            }
        }

        void doWork()
        {
            m_cpu->calculate();
            m_vc->display();
            m_memory->storage();
        }
};

class IntelCPU:public CPU
{
    public:
        void calculate()
        {
            cout<<"Intel的CPU开始计算了"<<endl;
        }
};

class IntelVideoCard:public VideoCard
{
    public:
        void display()
        {
            cout<<"Intel的显卡开始显示了"<<endl;
        }
};

class IntelMemory:public Memory
{
    public:
        void storage()
        {
            cout<<"Intel的内存条开始存储了"<<endl;
        }
};

class LenovoCPU:public CPU
{
    public:
        void calculate()
        {
            cout<<"Lenovo的CPU开始计算了"<<endl;
        }
};

class LenovoVideoCard:public VideoCard
{
    public:
        void display()
        {
            cout<<"Lenovo的显卡开始显示了"<<endl;
        }
};

class LenovoMemory:public Memory
{
    public:
        void storage()
        {
            cout<<"Lenovo的内存条开始存储了"<<endl;
        }
};


void test01()
{
    cout<<"第一台电脑开始工作："<<endl;
    CPU *cpu1=new IntelCPU;
    VideoCard *vc1=new IntelVideoCard;
    Memory *memory1=new IntelMemory;
    Computer *computer1=new Computer(cpu1,vc1,memory1);
    computer1->doWork();
    delete computer1;

    cout<<"第二台电脑开始工作："<<endl;
    Computer *computer2=new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory) ;
    computer2->doWork();
    delete computer2;


}

int main()
{
    test01();
    return 0;
}