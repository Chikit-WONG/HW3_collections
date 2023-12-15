#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s)
{
    if(s.length()==0||s.length()==1)
    {
        return true;
    }

    if(s[0]==s[s.length()-1])
    {
        string smaller;
        smaller=s.substr(1,s.length()-2);
        return isPalindrome(smaller);
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
