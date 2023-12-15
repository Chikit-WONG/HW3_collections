#include<iostream>
#include<list>

using namespace std;

void test01()
{
    list<int> l;
    for(int i=0;i<10;i++)
    {
        l.push_back(i);
    }

    list<int>::iterator it=l.begin();

    (++(++it))++; //I think it is a undefined behaviour, which should be avoided. 这可能是个未定义行为，应该被避免

    cout<<*it<<endl;
}

int main()
{
    test01();

    return 0;
}