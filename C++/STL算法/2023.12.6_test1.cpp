#include <iostream>
#include <vector>
#include <algorithm>

void printArr(int val)// 自定义操作：打印
{
    std::cout << val << " ";
}

int targetArr(int val)// 搬运规则函数，在原数据基础上加100
{
    return val + 100;
}

int main()
{
    std::vector<int> arr = { 0,1,2,3,4,5,6,7,8,9 }; // 原vector
    std::vector<int> target(arr.size()); // 目标vector，大小自动与原vector相同

    // 使用transform算法进行搬运操作
    std::transform(arr.begin(), arr.end(), target.begin(), targetArr);

    std::cout << "原vector打印：";
    std::for_each(arr.begin(), arr.end(), printArr);

    std::cout << "\n目标vector打印：";
    std::for_each(target.begin(), target.end(), printArr);
}
