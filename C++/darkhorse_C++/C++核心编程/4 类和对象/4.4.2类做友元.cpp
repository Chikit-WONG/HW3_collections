#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay
{
public:
    void vist();
    GoodGay();
private:
    Building *m_building;

};

class Building
{
friend class GoodGay;
public:
    Building();
    string m_SittingRoom;
private:
    string m_Bedroom;
    
};

GoodGay::GoodGay()
{
    m_building=new Building;
}

Building::Building()
{
    m_SittingRoom="����";
    m_Bedroom="����";

}

void GoodGay::vist()
{
    cout<<"�û������ڷ���"<<m_building->m_SittingRoom<<endl;
    cout<<"�û������ڷ���"<<m_building->m_Bedroom<<endl;
}

void test01()
{
    GoodGay gg;
    gg.vist();
}

int main()
{
    test01();
    return 0;
}