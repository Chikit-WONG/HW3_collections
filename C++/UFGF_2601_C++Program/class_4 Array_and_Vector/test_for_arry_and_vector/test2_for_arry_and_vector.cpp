#include<iostream>
#include<vector>
using namespace std;

double average(vector<double> v)
{
if (v.size() == 0) return 0;
double sum = 0;
for (int i = 0; i < v.size(); i++)
sum = sum + v[i];
return sum / v.size();
}

int main()
{
    vector<double> a;
    vector<double> b={1,2,3};
    cout<<average(a)<<endl;
    cout<<average(b)<<endl;
    return 0;
}