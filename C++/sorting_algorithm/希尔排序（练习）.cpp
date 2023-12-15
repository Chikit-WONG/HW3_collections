#include<iostream>
#include<vector>
using namespace std;

void print(const vector<int> &v)
{
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void shell_sort(vector<int> &v)
{
    size_t i,inc,n=v.size();
    int j,key;
    for(inc=n/2;inc>0;inc/=2)
    {
        for(i=inc;i<n;i++)
        {
            key=v[i];
            for(j=i-inc;j>=0&&v[j]>key;j-=inc)
            {
                v[j+inc]=v[j];
            }
            v[j+inc]=key;
        }
    }
}

int main()
{
    vector<int> v={1,5,7,8,9,1,3,5,4};
    print(v);
    shell_sort(v);
    print(v);
    return 0;
}