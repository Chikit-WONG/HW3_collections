#include<iostream>
using namespace std;

int strlenn(const char s[]) {
int i = 0;
while (s[i] != '\0')
++i;
return i;
}

int main()
{
    char arr[]="hello";
    int a=strlenn(arr);
    cout<<a<<endl;
    return 0;
}