#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01()
{
    vector<int>v={1,2,3,4,5};
    printVector(v);
    v.insert(v.begin()+1,2,114514);
    printVector(v);
    v.erase(v.begin()+1,v.begin()+3);
    printVector(v);
    v.clear();
    cout<<v.empty()<<endl;
}

int main()
{
    test01();
    return 0;
}