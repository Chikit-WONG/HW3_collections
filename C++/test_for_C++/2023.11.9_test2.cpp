#include <cassert>

int divide(int a, int b) {
    assert(b != 0); // ���ԣ�������Ϊ��

    return a / b;
}

int main() {
    int result = divide(10, 2);
    assert(result == 5); // ���ԣ��������Ϊ5

    result = divide(10, 0); // �����㣬����ʧ�ܣ�������ֹ

    return 0;
}