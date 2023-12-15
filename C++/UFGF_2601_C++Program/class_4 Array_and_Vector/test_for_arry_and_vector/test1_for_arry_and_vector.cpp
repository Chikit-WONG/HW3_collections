#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[2][3]={
        {1,2,3},
        {4,5,6,}
    };
    cout<<sizeof(arr)/sizeof(arr[0][0])<<endl;
    vector<double> values(10);
    vector<int> number;

    cout<<values.size()<<endl;
    for(int i=0;i<values.size();i++)
    {
        cout<<values[i]<<endl;
    }
    cout<<endl;
    for(int j=0;j<10;j++)
    {
        number.push_back(j);
        cout<<number[j]<<endl;
    }
    return 0;
}