#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s;
int p1, p2, p3;

bool check_valid(unsigned int i)
{
    if (s[i - 1] >= s[i + 1])
        return false;
    if (isdigit(s[i - 1]) && isdigit(s[i + 1]))
        return true;
    if (isalpha(s[i - 1]) && isalpha(s[i + 1]))
        return true;
    return false;
}

void modify(unsigned int i)
{
    int num = s[i + 1] - s[i - 1] - 1;
    if (p1 == 3)
    {
        s.replace(i, 1, string(num * p2, '*'));
        return;
    }
    // if (isalpha(s[i - 1]) || isdigit(s[i - 1]))
    // {
      
    // }
    if (num == 0)
    {
        s.erase(i, 0);
    }
    string mid="";  //test

    for (int j = 1; j <= num; j++)
    {
        char c = (s[i - 1] + j);
        mid += string(p2, c);
    }
    s.replace(i, 1, mid);
    // mid.clear();

    if (isalpha(s[i - 1]) && p1 == 2)
    {
        for (unsigned int j = i; j < (i + (num * p2)); j++)
        {
            s[j] = toupper(s[j]);
        }
    }
    if (p3 == 2)
    {
        reverse(s.begin() + i, s.begin() + i + (num * p2));
    }
}

int main()
{
    cin >> p1 >> p2 >> p3;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            if (check_valid(i))
            {
                modify(i);
            }
        }
    }
    cout << s << endl;
    return 0;
}