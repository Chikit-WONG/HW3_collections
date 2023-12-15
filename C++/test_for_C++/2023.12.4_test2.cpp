#include<iostream>
#include<deque>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void test01()
{
    deque<int> d={1,4,8,9,6,7};
    d.resize(10);
    for(int elem:d)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    list<int> l={1,4,5,9,7,5};
    l.resize(20);
    for(int elem:l)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    list<queue<vector<string>>> l2;
}

int main()
{
    test01();
    return 0;
}