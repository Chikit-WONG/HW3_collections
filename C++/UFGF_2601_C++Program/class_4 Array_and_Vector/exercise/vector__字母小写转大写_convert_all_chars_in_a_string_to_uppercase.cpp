#include<iostream>
#include<cctype>
#include<vector>
using namespace std;
vector<char> upper(string str)
{
    vector<char> result;
    for(int i=0;i<str.length();i++)
    {
        result.push_back(toupper(str[i]));
    }
    return result;
}

int main()
{
    string a;
    vector<char> result;
    cout<<"Please enter a word:";
    cin>>a;
    cout<<endl;
    result=upper(a);
    for(const auto &elem:result)
    {
        cout<<elem;
    }
    return 0;
}