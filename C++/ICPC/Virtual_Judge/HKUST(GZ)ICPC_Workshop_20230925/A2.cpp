#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n,m,a;
    cin>>n>>m>>a;
    
    long long need=ceil(n/a)*ceil(m/a);
    cout<<need<<endl;
    return 0;
}