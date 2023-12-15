#include <cassert>

int divide(int a, int b) {
    assert(b != 0); // 断言：除数不为零

    return a / b;
}

int main() {
    int result = divide(10, 2);
    assert(result == 5); // 断言：除法结果为5

    result = divide(10, 0); // 除以零，断言失败，程序终止

    return 0;
}