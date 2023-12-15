#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int i = 0;
    while (i < len && s[i] != 'h')
        i++;
    i++;
    while (i < len && s[i] != 'e')
        i++;
    i++;
    while (i < len && s[i] != 'l')
        i++;
    i++;
    while (i < len && s[i] != 'l')
        i++;
    i++;
    while (i < len && s[i] != 'o')
        i++;
    if (i < len)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}