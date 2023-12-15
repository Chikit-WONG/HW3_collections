#include <iostream>
#include <algorithm>
#include <vector>
#include<functional>
using namespace std;

int main() {
    // 创建一个正序的已排序数组
    std::vector<int> arr1 = {1, 3, 5, 7, 9};

    // 创建一个倒序的已排序数组
    std::vector<int> arr2 = {10, 8, 6,6,6,6,6,6,6, 4, 2};

    // 创建一个用于存储合并结果的向量
    std::vector<int> merged(arr1.size() + arr2.size());

    // 使用std::merge函数合并一个正序数组和一个倒序数组的子范围
    std::merge(arr1.begin() + 2, arr1.end() - 2, arr2.begin() + 2, arr2.end() - 2, merged.begin() + 2,greater<int>());

    // 打印合并结果
    std::cout << "Merged Array: ";
    for (const auto &element : merged) {
        std::cout << element << " ";
    }

    return 0;
}
