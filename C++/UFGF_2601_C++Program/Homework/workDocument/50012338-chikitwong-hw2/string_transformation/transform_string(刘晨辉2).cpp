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

       // ����p2��ֵ�����м��ַ���temp
    for (int j = start + 1; j < end; ++j) {
        for (int k = 0; k < p2; ++k) {
            char c = j;
            if (isalpha(c) && p1 == 2) c = toupper(c); // p1=2ʱת��Ϊ��д
            else if (p1 == 3) c = '*';  // p1=3ʱת��Ϊ�Ǻ�
            temp += c;
        }
    }

     // ����p3��ֵ�����Ƿ�תtemp
    if (p3 == 2) reverse(temp.begin(), temp.end());

    // �滻ԭ�ַ����е����ۺţ�������i��λ��
    s.replace(i, 1, temp);
    i += temp.size() - 1; // i�ƶ�����չ����ַ�����ĩβ
}

bool isValid(const string& s, int i) {
    if (i == 0 || i == s.size() - 1) return false; // ���ۺ������˵����
    if (isdigit(s[i - 1]) && isdigit(s[i + 1])) return s[i - 1] < s[i + 1];
    if (islower(s[i - 1]) && islower(s[i + 1])) return s[i - 1] < s[i + 1];
    return false;  // ���������Ϊ��Ч
}

int main() {
    // ����������ַ���
    int p1, p2, p3;
    string s;
    cin >> p1 >> p2 >> p3;
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        // ��ǰ�ַ������ۺ���ǰ���ַ���Чʱ������չ
        if (s[i] == '-' && isValid(s, i)) {
            expand(s, i, p1, p2, p3);
        }
    }

    // ����������ַ���
    cout << s << endl;
    // auto end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double> elapsed = end - start;
    // std::cout << "Elapsed time: " << elapsed.count() << " seconds\n";

    return 0;
}