#include<iostream>
using namespace std;
int main()
{int ival = 1.01;
//  int &rval1 = 1.01;
 int &rval2 = ival;
//  int &val3;
cout<<ival<<endl;
cout<<rval2<<endl;
return 0; 
}