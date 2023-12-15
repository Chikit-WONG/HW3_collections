#include <algorithm>
#include <iostream>
#include <vector>
#include<functional>

using namespace std;

void test01()
{
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};

    // ʹ�� std::partial_sort ���оֲ�����ֻ����ǰ 4 ��Ԫ��
    std::sort(vec.begin(), vec.begin() + 4);

    // ����ֲ������Ľ��
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

    // ָ��λ�õ�Ԫ�ؽ�������ȷ������λ��
    int n = 4;

    // ʹ�� std::nth_element ���в�������
    std::nth_element(vec.begin(), vec.begin() + n - 1, vec.end(),std::greater<int>());

    // ������������Ľ��
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
