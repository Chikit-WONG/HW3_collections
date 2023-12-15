#include <algorithm>
#include <iostream>
#include <vector>
#include<functional>

using namespace std;

void test01()
{
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};

    // 使用 std::partial_sort 进行局部排序，只排序前 4 个元素
    std::sort(vec.begin(), vec.begin() + 4);

    // 输出局部排序后的结果
    std::cout << "Partial sorted array: ";
    for (const auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void test02()
{

    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};

    // 指定位置的元素将处于正确的排序位置
    int n = 4;

    // 使用 std::nth_element 进行部分排序
    std::nth_element(vec.begin(), vec.begin() + n - 1, vec.end(),std::greater<int>());

    // 输出部分排序后的结果
    std::cout << "Partial sorted array: ";
    for (const auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main()
{
    test02();

    return 0;
}
