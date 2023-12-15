#include<iostream>
using namespace std;

class MyInteger
{
    friend ostream& operator<<(ostream &out,MyInteger myint);
public:
    MyInteger()
    {
        m_Num=0;
    }

    MyInteger& operator++()
    {
        m_Num++;
        return *this;
    }

    MyInteger operator++(int)
    {   MyInteger temp=*this;

        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

ostream& operator<<(ostream &out,MyInteger myint)
{
    out<<myint. m_Num;
    return out;
}

void test01()
{
    MyInteger a;
    cout<<"++a="<<++a<<endl;//1
    cout<<"a++="<<a++<<endl;//1
    cout<<"a="<<a<<endl;//2
    cout<<"(a++)++="<<(a++)<<endl;//2
    cout<<"a="<<a<<endl;//4

}

int main()
{
    test01();
    return 0;
}


