#include<iostream>
#include<vector>
using namespace std;
 void erase(vector<double> &v,double low,double high)
 {
    for(int i=0;i<v.size();i++)
    {
        if(low<=v[i]&&v[i]<=high)
        {
            for(int j=i;j<v.size()-1;j++)
            {
                v[j]=v[j+1];
                // cout<<v[j]<<endl;
            }
            v.pop_back();
            --i;
        }
    }
    for(double num:v)
    {
        cout<<num<<" "<<endl;
    }
 }

 int main()
 {
    int num1,num2,c;
    vector<double> a;
    cout<<"input low number:";
    cin>>num1;
    cout<<"input high number:";
    cin>>num2;
    cout<<"input some number(input something other than a number to quit):";
    while(cin>>c)
    {
        a.push_back(c);
    }
    

    erase(a,num1,num2);
    return 0;

 }