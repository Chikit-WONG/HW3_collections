#include<iostream>
#include<vector>
using namespace std;
vector<double> duplicates(vector<double> v)
{
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])
            {
                for(int k=j;k<v.size()-1;k++)
                {
                    v[k]=v[k+1];
                }
                v.pop_back();
                --j;
            }
        }
    }
    
    return v;
}

int main()
{
    vector<double> a;
    double b;
    cout<<"Please input some number(input something other than a number to quit):";
    while(cin>>b)
    {
        a.push_back(b);
    }

    cout<<"Before remove duplicates:";
     for(double elem1:a)
    {
        cout<<elem1<<" ";
    }
    cout<<endl;
    cout<<"After remove duplicates:";
    a=duplicates(a);
    for(double elem2:a)
    {
        cout<<elem2<<" ";
    }
    return 0;
}