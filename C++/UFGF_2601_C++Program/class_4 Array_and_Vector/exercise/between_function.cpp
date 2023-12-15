#include<iostream>
#include<vector>
using namespace std;

vector<double> find_all_between(vector<double> &v,double low,double high) 
{
    vector<double> result;
    for(int i=0;i<v.size();i++)
    {
        if(low<=v[i]&&v[i]<=high)
        {
            result.push_back(v[i]);

        }
    }

    return result;
}
int main()
{
    double input_low,input_high,input;
    vector<double> number;
    cout<<"input the low number:"<<endl;
    cin>>input_low;
    cout<<"input the high number:"<<endl;
    cin>>input_high;
    cout<<"input some number(input without number to quit):"<<endl;
    while(cin>>input)
    {
        number.push_back(input);
    };
    // cout<<find_all_between(number,input_low,input_high)<<endl;
    vector<double> result2=find_all_between(number,input_low,input_high);
    
    for(double num:result2)
    {
        cout<<num<<" ";
    }

    return 0;
    
}