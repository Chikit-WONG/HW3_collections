#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int> &v,const int &j,const int &i)
{
    int temp=v[j];
    v[j]=v[i];
    v[i]=temp;
}

void print(vector<int> &v)
{
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void selection_sort1(vector<int> &v) //升序
{
    for(size_t i=0;i<v.size();i++)
    {
        size_t min=i;
        for(size_t j=i+1;j<v.size();j++)
        {
            if(v[j]<v[min])
            {
                min=j;
            }
        }
        swap(v,min,i);
    }
}

void selection_sort2(vector<int> &v) //降序
{
    for(size_t i=0;i<v.size();i++)
    {
        size_t max=i;
        for(size_t j=i+1;j<v.size();j++)
        {
            if(v[j]>v[max])
            {
                max=j;
            }
        }
        swap(v,max,i);
    }
}

int main()
{
    vector<int> v={1,5,7,8,4,5,3,1,5,9};
    print(v);
    selection_sort1(v);
    print(v);
    selection_sort2(v);
    print(v);
    return 0; 
}