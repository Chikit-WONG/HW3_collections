#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//template<typename T>
void Myprint(int val)
{
    std::cout<<val<<" ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator vBegin=v.begin();
    vector<int>::iterator vEnd=v.end();
    while(vBegin!=vEnd)
    {
        std::cout<<*vBegin<<" ";
        vBegin++;
    }
    std::cout<<std::endl;

    for(vector<int>::iterator vBegin2=v.begin();vBegin2!=v.end();vBegin2++)
    {
        std::cout<<*vBegin2<<" ";
    }
    std::cout<<std::endl;

    for_each(v.begin(),v.end(),Myprint);
}

int main()
{
    test01();
    return 0;
}