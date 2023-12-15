#include <functional>  // 包含 functional 头文件
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // 创建一个倒序的vector
    std::vector<int> vec = {10, 8, 6, 4, 2};

    // 要查找的数
    int target = 6;

    // 使用 std::binary_search 进行二分查找
    bool found = std::binary_search(vec.rbegin(), vec.rend(), target);

    if (found) {
        std::cout << "找到了目标数 " << target << "。" << std::endl;
    } else {
        std::cout << "未找到目标数 " << target << "。" << std::endl;
    }

    return 0;
}
