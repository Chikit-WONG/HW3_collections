#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int> &v,const int &i,const int &j)
{
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}

void print(vector<int> &v)
{
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort1(vector<int> &v) //ÉýÐò
{
    for(size_t i=1;i<v.size();i++)
    {
        int key=v[i];
        int j=i-1;
        while(j>=0&&v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}

void insertion_sort2(vector<int> &v) //½µÐò
{
    for(size_t i=1;i<v.size();i++)
    {
        int key=v[i];
        int j=i-1;
        while(j>=0&&v[j]<key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}

int main()
{
    vector<int>v={1,4,5,9,7,8,3,5,6,3};
    print(v);
    insertion_sort1(v);
    print(v);
    insertion_sort2(v);
    print(v);
    return 0;
}