#include<iostream>
using namespace std;
int main()
{
    string str="hello";
   char arr1[]="a";
   char arr2[]="b";
   char sum[sizeof(arr1)+sizeof(arr2)+1];
   cout<<sizeof(arr1)<<endl;
   cout<<sizeof(sum)<<endl;
   sum[0]=arr1[0];
   sum[1]=arr2[0];
   cout<<sum<<endl;
   cout<<str.length();
    return 0;
}