#include<iostream>
#include<vector>
using namespace std;

void raise_by_percent(vector<double>& v, double p)
{
for (int i = 0; i < v.size(); i++)
v[i] =v[i] * (1 + p / 100);
}

int main()
{
    vector<double> a={1,2,3};
    double b=5;
    raise_by_percent(a);
    cout<<a<<endl;
    return 0;
}
