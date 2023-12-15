#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
// #include<chrono>
// auto start = std::chrono::high_resolution_clock::now();
using namespace std;

void expand(string& s, int& i, int p1, int p2, int p3) {
    string temp;
    int start = s[i - 1];
    int end = s[i + 1];

       // 根据p2的值生成中间字符串temp
    for (int j = start + 1; j < end; ++j) {
        for (int k = 0; k < p2; ++k) {
            char c = j;
            if (isalpha(c) && p1 == 2) c = toupper(c); // p1=2时转换为大写
            else if (p1 == 3) c = '*';  // p1=3时转换为星号
            temp += c;
        }
    }

     // 根据p3的值决定是否翻转temp
    if (p3 == 2) reverse(temp.begin(), temp.end());

    // 替换原字符串中的破折号，并调整i的位置
    s.replace(i, 1, temp);
    i += temp.size() - 1; // i移动到扩展后的字符串的末尾
}

bool isValid(const string& s, int i) {
    if (i == 0 || i == s.size() - 1) return false; // 破折号在两端的情况
    if (isdigit(s[i - 1]) && isdigit(s[i + 1])) return s[i - 1] < s[i + 1];
    if (islower(s[i - 1]) && islower(s[i + 1])) return s[i - 1] < s[i + 1];
    return false;  // 其他情况视为无效
}

int main() {
    // 输入参数和字符串
    int p1, p2, p3;
    string s;
    cin >> p1 >> p2 >> p3;
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        // 当前字符是破折号且前后字符有效时进行扩展
        if (s[i] == '-' && isValid(s, i)) {
            expand(s, i, p1, p2, p3);
        }
    }

    // 输出处理后的字符串
    cout << s << endl;
    // auto end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double> elapsed = end - start;
    // std::cout << "Elapsed time: " << elapsed.count() << " seconds\n";

    return 0;
}