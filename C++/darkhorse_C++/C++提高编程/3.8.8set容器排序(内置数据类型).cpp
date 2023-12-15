#include<iostream>
#include<set>

using namespace std;

class MyCompare
{
public:
    bool operator()(int val1,int val2)
    {
        cout<<114514<<endl;
        return val1>val2;
    }
};

void printSet(const set<int,MyCompare> &s)
{
    for(set<int,MyCompare>::const_iterator it=s.cbegin();it!=s.cend();it++)
    {
        std::cout<<*it<<" "<<std::endl;
    }
    std::cout<<std::endl;
}

void test01()
{
    set<int,MyCompare> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    printSet(s1);
}

int main()
{
    test01();
    return 0;
}