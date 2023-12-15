#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void printDeque1(const deque<int> &d)
{
    for(int elem:d)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

void printDeque2(const deque<int> &d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01()
{
    deque<int> d;
    for(int i=9;i>=0;i--)
    {
        d.push_front(i);
    }
    printDeque1(d);
    deque<int>(d.begin()+1,d.begin()+6).swap(d);
    printDeque2(d);

}

void test02()
{
    deque<int> d={9,6,5,4,8,9,1,2,3,4,5};
    sort(d.rbegin(),d.rend());
    printDeque2(d);
}

int main()
{
    //test01();
    test02();
    return 0;
}