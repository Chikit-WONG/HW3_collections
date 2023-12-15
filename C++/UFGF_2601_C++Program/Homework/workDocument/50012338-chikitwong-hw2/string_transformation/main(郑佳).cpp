/*对比我和郑佳的，我的想法是通过p1->p2->p3的顺序来逐步分支具体的操作，并且不熟悉string的方法，用了vector来做
而郑佳的做法是想考虑两个特殊情况，(1)a-b,4-5 等等相邻的情况；(2)p1==3的情况，先运算主要步奏，在根据参数来实现其它情况，这样做减少了很多重复的代码
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s, mid;
int p1, p2, p3;

void modify(int i)
{
    int num = s[i + 1] - s[i - 1] - 1;
    if (p1 == 3)
    {
        s.replace(i, 1, string(num*p2, '*'));
        return;
    }
    if (isdigit(s[i - 1]) || isalpha(s[i - 1]))
    {
        if (num == 0)
            s.erase(i, 0);
        for (int j = 1; j <= num; ++j)
        {
            char c = (s[i - 1] + j);
            mid += string(p2, c);
        }
        s.replace(i, 1, mid);
        mid.clear(); // 这里千万别忘清空，否则多次尝试输入会报错！！
    }
    if (isalpha(s[i - 1]) && p1 == 2)
        for (int j = i; j < (i + num * p2); ++j)
            s[j] = toupper(s[j]);
    if (p3 == 2)
        reverse(s.begin() + i, s.begin() + i + num * p2);
}

bool check_valid(int i)
{
    if (s[i - 1] >= s[i + 1])
        return false;
    if (isdigit(s[i - 1]) && isdigit(s[i + 1]))
        return true;
    if (isalpha(s[i - 1]) && isalpha(s[i + 1]))
        return true;
    return false;
}

int main()
{
    while (true)
    {
        cin >> p1 >> p2 >> p3;
        cin >> s;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '-')
                if (check_valid(i))
                    modify(i);
        }
        cout << s;
    }
    return 0;
}