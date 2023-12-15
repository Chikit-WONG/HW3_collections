#include<iostream>
using namespace std;
class Building
{
    friend void GoodGay(Building *p);
public:
    Building()
    {
        m_SittingRoom="客厅";
        m_BedRoom="卧室";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};

void GoodGay(Building *p)
{
    cout<<"好基友正在访问："<<p->m_SittingRoom<<endl;
    cout<<"好基友正在访问："<<p->m_BedRoom<<endl;
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
