#include<iostream>
using namespace std;
class Building
{
    friend void GoodGay(Building *p);
public:
    Building()
    {
        m_SittingRoom="����";
        m_BedRoom="����";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};

void GoodGay(Building *p)
{
    cout<<"�û������ڷ��ʣ�"<<p->m_SittingRoom<<endl;
    cout<<"�û������ڷ��ʣ�"<<p->m_BedRoom<<endl;
}

void test01()
{
    Building b;
    GoodGay(&b);
}

int main()
{
    test01();
    return 0;
}
