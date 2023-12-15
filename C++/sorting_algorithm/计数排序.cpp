#include<iostream>
#include<vector>
using namespace std;

void print0(const vector<int> &v)
{
    size_t n=v.size();
    for(size_t i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print(const vector<int> &v)
{
    size_t n=v.size();
    for(size_t i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }    
    cout<<endl;
}

void print1(vector<int> &v2,unsigned int offset)
{
    size_t n=v2.size();
    for(size_t i=0;i<n;i++)
    {
        while(v2[i]>0)
        {
            cout<<i+offset<<" ";
            v2[i]--;
        }
    }
    cout<<endl;
}

void print2(vector<int> &v2,unsigned int offset)
{
    size_t n=v2.size();
    for(int i=n-1;i>=0;i--)
    {
        while(v2[i]>0)
        {
            cout<<i+offset<<" ";
            v2[i]--;
        }
    }
    cout<<endl;
}


vector<int> find_max_and_min(vector<int> &v)
{
    int max=v[0],min=v[0];
    size_t n=v.size();
    for(size_t i=1;i<n;i++)
    {
        if(v[i]>max)
            max=v[i];
        if(v[i]<min)
            min=v[i];
    }
    vector<int> v3;
    v3.push_back(min);
    v3.push_back(max);
    return v3;
}

void counting_sort1(vector<int> &v)
{
    vector<int> v3=find_max_and_min(v);
    vector<int> v2(v3[1]-v3[0]+1);
    size_t n=v.size();
    int offset=v3[0];
    for(size_t i=0;i<n;i++)
    {
        v2[v[i]-offset]++;
    }
    print1(v2,offset);
}

void counting_sort2(vector<int> &v)
{
    vector<int> v3=find_max_and_min(v);
    vector<int> v2(v3[1]-v3[0]+1);
    size_t n=v.size();
    int offset=v3[0];
    for(size_t i=0;i<n;i++)
    {
        v2[v[i]-offset]++;
    }
    print2(v2,offset);
}



int main()
{
    vector<int> v={1,5,4,8,9,6,3,4};
    print0(v);
    counting_sort1(v);
    counting_sort2(v);
}