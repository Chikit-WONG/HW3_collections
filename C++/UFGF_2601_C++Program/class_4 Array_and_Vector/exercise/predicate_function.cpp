#include<iostream>
#include<vector>
using namespace std;

bool equals(const vector<int> &a,const vector<int> &b)
{
    if(a.size()!=b.size())
    {
        return false;
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int input_a=0,input_b=0;
    vector<int> num1;
    vector<int> num2;
    cout<<"input a(end with -1):"<<endl;
    while(cin>>input_a&&input_a!=-1)
    {
        num1.push_back(input_a);
    }
    // for(double test1:num1)
    // {
    //     cout<<test1<<endl;
    // }
    cout<<endl;
   
    cout<<"input b(end with -1):"<<endl;
    while(cin>>input_b&&input_b!=-1)
    {
        num2.push_back(input_b);
    }

    //  for(double test2:num2)
    // {
    //     cout<<test2<<endl;
    // }
    
    int result=equals(num1,num2);
    cout<<result;
    return 0;
}