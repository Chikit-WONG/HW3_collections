#include <cassert>

int divide(int a, int b) {
    // ���ԣ�ȷ��������Ϊ��
    assert(b != 0);

    return a / b;
}

int main() {
    int result = divide(10, 2);
    // �˴����Գɹ���������Ϊ�㣬�������ִ��

    result = divide(5, 0);
    // �˴�����ʧ�ܣ�����Ϊ�㣬������ֹ����ʾ������Ϣ

    return 0;
}