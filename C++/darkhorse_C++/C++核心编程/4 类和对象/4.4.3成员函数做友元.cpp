#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();
    void visit2();
    Building * m_building;
};

class Building
{
public:
    string m_SittingRoom;
    string m_BedRoom;
    Building();

};

GoodGay::GoodGay()
{
    m_building=new Building;
}

Building::Building()
{
    m_SittingRoom="客厅";
    m_BedRoom="卧室";
}

void GoodGay::visit()
{
    cout<<"好基友访问了"<<m_building->m_SittingRoom<<endl;
    cout<<"好基友访问了"<<m_building->m_BedRoom<<endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}