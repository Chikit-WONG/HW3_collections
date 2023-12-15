#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

class MyPrint
{
public:
    template<typename T>
    void operator()(T val)
    {
        std::cout<<val<<" ";
    }
};

void test01()
{
    vector<int> v1{1,2,3,4,5,16,17,18,19,20};
    vector<int> v2{5,6,7,8,9,10,11,12,13,14,15};
    vector<int> vTarget(v1.size()+v2.size());

    // reverse(v1.begin(),v1.end());
    // reverse(v2.begin(),v2.end());

    vector<int>::iterator itEnd=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,MyPrint());
}

int main()
{
    test01();

    return 0;
}