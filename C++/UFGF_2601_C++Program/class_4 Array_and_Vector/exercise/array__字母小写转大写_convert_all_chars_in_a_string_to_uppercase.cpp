#include <iostream>
#include <cctype>
using namespace std;
void upper(int CAPACITY, string str)
{
    char arr[CAPACITY];
    if (str.length() < CAPACITY)
    {
        for (int i = 0; i < str.length(); i++)
        {
            arr[i]=toupper(str[i]);
        }
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int CAPACITY;
    string str;
    cout<<"enter the max length of the word:";
    cin>>CAPACITY;
    cout<<"enter a word:";
    cin>>str;
    upper(CAPACITY,str);
    return 0;
}