#include <cassert>

int divide(int a, int b) {
    // 断言：确保除数不为零
    assert(b != 0);

    return a / b;
}

int main() {
    int result = divide(10, 2);
    // 此处断言成功，除数不为零，程序继续执行

    result = divide(5, 0);
    // 此处断言失败，除数为零，程序终止并显示错误消息

    return 0;
}