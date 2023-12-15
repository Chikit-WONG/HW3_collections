#include <iostream>
#include <vector>
#include <algorithm>

void printArr(int val)// �Զ����������ӡ
{
    std::cout << val << " ";
}

int targetArr(int val)// ���˹���������ԭ���ݻ����ϼ�100
{
    return val + 100;
}

int main()
{
    std::vector<int> arr = { 0,1,2,3,4,5,6,7,8,9 }; // ԭvector
    std::vector<int> target(arr.size()); // Ŀ��vector����С�Զ���ԭvector��ͬ

    // ʹ��transform�㷨���а��˲���
    std::transform(arr.begin(), arr.end(), target.begin(), targetArr);

    std::cout << "ԭvector��ӡ��";
    std::for_each(arr.begin(), arr.end(), printArr);

    std::cout << "\nĿ��vector��ӡ��";
    std::for_each(target.begin(), target.end(), printArr);
}
