#include <functional>  // ���� functional ͷ�ļ�
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // ����һ�������vector
    std::vector<int> vec = {10, 8, 6, 4, 2};

    // Ҫ���ҵ���
    int target = 6;

    // ʹ�� std::binary_search ���ж��ֲ���
    bool found = std::binary_search(vec.rbegin(), vec.rend(), target);

    if (found) {
        std::cout << "�ҵ���Ŀ���� " << target << "��" << std::endl;
    } else {
        std::cout << "δ�ҵ�Ŀ���� " << target << "��" << std::endl;
    }

    return 0;
}
