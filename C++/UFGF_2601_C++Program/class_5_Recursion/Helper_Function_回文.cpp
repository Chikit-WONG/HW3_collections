#include<iostream>
#include<string>
using namespace std;
bool isShortPalindrome(const string&s,int start,int end)
{
    if(start>=end)
    {
        return true;
    }

    if(s[start+1]==s[end-1])
    {
        return isShortPalindrome(s,start+1,end-1);
    }
    else
    {
        return false;
    }
   
}

bool isPalindrome(const string &s)
{
    if(s.length()==0||s.length()==1)
    {
        return true;
    }

    if(s[0]==s[s.length()-1])
    {
        
        
        return isShortPalindrome(s,0,s.length()-1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cout<<"Please enter a string:"<<endl;
    cin>>s;
   if(isPalindrome(s))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
