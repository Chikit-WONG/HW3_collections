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
    m_SittingRoom="����";
    m_BedRoom="����";
}

void GoodGay::visit()
{
    cout<<"�û��ѷ�����"<<m_building->m_SittingRoom<<endl;
    cout<<"�û��ѷ�����"<<m_building->m_BedRoom<<endl;
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