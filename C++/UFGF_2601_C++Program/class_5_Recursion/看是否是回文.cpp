#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string a)
{
    if(a.length()<=1)
    {
        return true;
    }
   char first=a[0];
   char last=a[a.length()-1];
   if(first==last)
   {
     string shorter=a.substr(1,a.length()-2);
     return isPalindrome(shorter);
    
   }
   else{
    return false;
   }
}
int main()
{
    string a;
    cin>>a;
    if(isPalindrome(a))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}