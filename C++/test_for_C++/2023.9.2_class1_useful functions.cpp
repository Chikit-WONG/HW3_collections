#include<iostream>
#include<cmath>
using namespace std;
int main()
{   float a,b,c,d,e;
     
   cout<<"a=";
   cin>>a;
   cout<<"b=";
   cin>>b;
   cout<<"c=";
   cin>>c;
   d=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
   e=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
   cout<<d<<" "<<e;
   
   system("pause");
   return 0;



}