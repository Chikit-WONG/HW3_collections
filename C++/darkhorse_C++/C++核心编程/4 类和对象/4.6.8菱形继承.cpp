#include<iostream>
using namespace std;
class Animal
{
    public:
        int m_Age;

};

class Sheep:virtual public Animal
{
    // public:
    //     int m_Age;
};

class Tuo:virtual public Animal
{
    // public:
    //     int m_Age;
};

class SheepTuo:public Sheep,public Tuo
{
    // public:
    //     int m_Age;
};

void test01()
{
    SheepTuo st;
    st.m_Age=100;
    st.m_Age=200;
    cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
    cout<<"st.m_Age="<<st.m_Age<<endl;
}

int main()
{
    test01();
    return 0;
}