#include <iostream>
#include <algorithm>
#include <vector>
#include<functional>
using namespace std;

int main() {
    // ����һ�����������������
    std::vector<int> arr1 = {1, 3, 5, 7, 9};

    // ����һ�����������������
    std::vector<int> arr2 = {10, 8, 6,6,6,6,6,6,6, 4, 2};

    // ����һ�����ڴ洢�ϲ����������
    std::vector<int> merged(arr1.size() + arr2.size());

    // ʹ��std::merge�����ϲ�һ�����������һ������������ӷ�Χ
    std::merge(arr1.begin() + 2, arr1.end() - 2, arr2.begin() + 2, arr2.end() - 2, merged.begin() + 2,greater<int>());

    // ��ӡ�ϲ����
    std::cout << "Merged Array: ";
    for (const auto &element : merged) {
        std::cout << element << " ";
    }

    return 0;
}
