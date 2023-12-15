// #include <iostream>
// #include <cmath>

// // 判断给定的进制 base 是否满足 p * q = r
// bool isBaseValid(int p, int q, int r, int base) {
//     int product = p * q;
//     int result = 0;
//     int power = 0;

//     // 将 r 转换为十进制
//     while (r > 0) {
//         int remainder = r % 10;
//         result += remainder * pow(base, power);
//         r /= 10;
//         power++;
//     }

//     return product == result;
// }

// // 找到满足 p * q = r 的最小进制 base
// int findSmallestBase(int p, int q, int r) {
//     for (int base = 2; base <= 16; base++) {
//         if (isBaseValid(p, q, r, base)) {
//             return base;
//         }
//     }
//     return 0; // 没有找到满足条件的进制
// }

// int main() {
//     int p, q, r;
//     std::cin >> p >> q >> r;

//     int smallestBase = findSmallestBase(p, q, r);
//     std::cout << smallestBase << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// // 将指定进制的数字转换为十进制
// int convertToDecimal(const std::string& number, int base) {
//     int result = 0;
//     int power = 1;

//     for (int i = number.length() - 1; i >= 0; i--) {
//         int digit = (number[i] >= '0' && number[i] <= '9') ? (number[i] - '0') : (number[i] - 'A' + 10);
//         result += digit * power;
//         power *= base;
//     }

//     return result;
// }

// // 判断给定的进制 base 是否满足 p * q = r
// bool isBaseValid(const std::string& p, const std::string& q, const std::string& r, int base) {
//     int pDecimal = convertToDecimal(p, base);
//     int qDecimal = convertToDecimal(q, base);
//     int rDecimal = convertToDecimal(r, base);

//     return pDecimal * qDecimal == rDecimal;
// }

// // 找到满足 p * q = r 的最小进制 base
// int findSmallestBase(const std::string& p, const std::string& q, const std::string& r) {
//     for (int base = 2; base <= 16; base++) {
//         if (isBaseValid(p, q, r, base)) {
//             return base;
//         }
//     }
//     return 0; // 没有找到满足条件的进制
// }

// int main() {
//     std::string p, q, r;
//     std::cin >> p >> q >> r;

//     int smallestBase = findSmallestBase(p, q, r);
//     std::cout << smallestBase << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// // 将指定进制的数字转换为十进制
// int convertToDecimal(const std::string& number, int base) {
//     int result = 0;
//     int power = 1;

//     for (int i = number.length() - 1; i >= 0; i--) {
//         int digit = (number[i] >= '0' && number[i] <= '9') ? (number[i] - '0') : (number[i] - 'A' + 10);
//         result += digit * power;
//         power *= base;
//     }

//     return result;
// }

// // 判断给定的进制 base 是否满足 p * q = r
// bool isBaseValid(const std::string& p, const std::string& q, const std::string& r, int base) {
//     int pDecimal = convertToDecimal(p, base);
//     int qDecimal = convertToDecimal(q, base);
//     int rDecimal = convertToDecimal(r, base);

//     return pDecimal * qDecimal == rDecimal;
// }

// // 找到满足 p * q = r 的最小进制 base
// int findSmallestBase(const std::string& p, const std::string& q, const std::string& r) {
//     int maxDigit = std::max({ *std::max_element(p.begin(), p.end()),
//                               *std::max_element(q.begin(), q.end()),
//                               *std::max_element(r.begin(), r.end()) });

//     int smallestBase = std::max(2, maxDigit - '0' + 1);

//     while (smallestBase <= 16) {
//         if (isBaseValid(p, q, r, smallestBase)) {
//             return smallestBase;
//         }
//         smallestBase++;
//     }

//     return 0; // 没有找到满足条件的进制
// }

// int main() {
//     std::string p, q, r;
//     std::cin >> p >> q >> r;

//     int smallestBase = findSmallestBase(p, q, r);
//     std::cout << smallestBase << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// // 将指定进制的数字转换为十进制
// int convertToDecimal(const std::string& number, int base) {
//     int result = 0;
//     int power = 1;

//     for (int i = number.length() - 1; i >= 0; i--) {
//         int digit;
//         if (number[i] >= '0' && number[i] <= '9') {
//             digit = number[i] - '0';
//         } else if (number[i] >= 'A' && number[i] <= 'Z') {
//             digit = number[i] - 'A' + 10;
//         } else {
//             return -1;  // 非法字符
//         }

//         if (digit >= base) {
//             return -1;  // 非法数字
//         }

//         result += digit * power;
//         power *= base;
//     }

//     return result;
// }

// // 判断给定的进制 base 是否满足 p * q = r
// bool isBaseValid(const std::string& p, const std::string& q, const std::string& r, int base) {
//     int pDecimal = convertToDecimal(p, base);
//     int qDecimal = convertToDecimal(q, base);
//     int rDecimal = convertToDecimal(r, base);

//     return pDecimal != -1 && qDecimal != -1 && rDecimal != -1 && pDecimal * qDecimal == rDecimal;
// }

// // 找到满足 p * q = r 的最小进制 base
// int findSmallestBase(const std::string& p, const std::string& q, const std::string& r) {
//     int maxDigit = std::max({ *std::max_element(p.begin(), p.end()),
//                               *std::max_element(q.begin(), q.end()),
//                               *std::max_element(r.begin(), r.end()) });

//     int smallestBase = std::max(2, maxDigit - '0' + 1);

//     while (smallestBase <= 16) {
//         if (isBaseValid(p, q, r, smallestBase)) {
//             return smallestBase;
//         }
//         smallestBase++;
//     }

//     return 0; // 没有找到满足条件的进制
// }

// int main() {
//     std::string p, q, r;
//     std::cin >> p >> q >> r;

//     int smallestBase = findSmallestBase(p, q, r);
//     std::cout << smallestBase << std::endl;

//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

// 将指定进制的数字转换为十进制
int convertToDecimal(const std::string& number, int base) {
    int result = 0;
    int power = 1;

    for (int i = number.length() - 1; i >= 0; i--) {
        int digit;
        if (number[i] >= '0' && number[i] <= '9') {
            digit = number[i] - '0';
        } else if (number[i] >= 'A' && number[i] <= 'Z') {
            digit = number[i] - 'A' + 10;
        } else {
            return -1;  // 非法字符
        }

        if (digit >= base) {
            return -1;  // 非法数字
        }

        result += digit * power;
        power *= base;
    }

    return result;
}

// 判断给定的进制 base 是否满足 p * q = r
bool isBaseValid(const std::string& p, const std::string& q, const std::string& r, int base) {
    int pDecimal = convertToDecimal(p, base);
    int qDecimal = convertToDecimal(q, base);
    int rDecimal = convertToDecimal(r, base);

    return pDecimal != -1 && qDecimal != -1 && rDecimal != -1 && pDecimal * qDecimal == rDecimal;
}

// 找到满足 p * q = r 的最小进制 base
int findSmallestBase(const std::string& p, const std::string& q, const std::string& r) {
    int maxDigit = std::max({ *std::max_element(p.begin(), p.end()),
                              *std::max_element(q.begin(), q.end()),
                              *std::max_element(r.begin(), r.end()) });

    int smallestBase = std::max(2, maxDigit - '0' + 1);
    smallestBase = std::max(smallestBase, 11);  // 确保至少从11进制开始尝试

    while (smallestBase <= 16) {
        if (isBaseValid(p, q, r, smallestBase)) {
            return smallestBase;
        }
        smallestBase++;
    }

    return 0; // 没有找到满足条件的进制
}

int main() {
    std::string p, q, r;
    std::cin >> p >> q >> r;

    int smallestBase = findSmallestBase(p, q, r);
    std::cout << smallestBase << std::endl;

    return 0;
}