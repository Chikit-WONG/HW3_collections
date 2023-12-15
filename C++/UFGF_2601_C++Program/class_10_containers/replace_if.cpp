#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class MyPrint
{
public:
    int operator()(int value)
    {
        std::cout<<value<<" ";
    }
};


class ReplaceOdd
{
public:
    bool operator()(int value)
    {
        return value%2!=0;
    }
};


int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9,10};

    replace_if(v.begin(),v.end(),[](int& num)->bool{return num%2!=0;},0);

    for_each(v.begin(),v.end(),MyPrint());
    std::cout<<std::endl;

    vector<int> v2{1,2,3,4,5,6,7,8,9,10};

    replace_if(v2.begin(),v2.end(),ReplaceOdd(),0);

    for_each(v2.begin(),v2.end(),MyPrint());

    return 0;
}