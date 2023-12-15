#include<iostream>
#include<deque>
using namespace std;

template<typename Container>
void insertValue(Container &elements,int value)
{
    auto it=elements.begin();
    while(it!=elements.end()&&*it<value)
    {
        ++it;
    }
    elements.insert(it,value);
}

int main()
{
    deque<int> d={1,2,3,4,6,7,8,9,10};
    insertValue(d,5);

    for(int e:d)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    return 0;
}