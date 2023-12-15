#include<iostream>
#include<vector>
#include<list>
#include<forward_list>

using namespace std;

void printVector(vector<int> &v)
{
    for(int elem:v)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

void printList(list<int> &l)
{
    for(int elem:l)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

void printForwardList(forward_list<int> &f)
{
    for(int elem:f)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v{1,2,3,4,5,6};
    list<int> l{1,2,3,4,5,6};
    forward_list<int> f{1,2,3,4,5,6};

    printVector(v);
    printList(l);
    printForwardList(f);

    return 0;

}