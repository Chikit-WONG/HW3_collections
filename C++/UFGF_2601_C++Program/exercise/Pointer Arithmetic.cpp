#include<iostream>
using namespace std;
int main()
{
    double a[10];
double *p = a;
cout<<(*(p + 3) == p[3])<<endl;
return 0;
}