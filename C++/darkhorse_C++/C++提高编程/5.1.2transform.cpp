#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
// ���ñ����㷨 ���� transform
class TransForm
{
public:
    int operator()(int val)
    {
        return val+100;
    }
};
class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int> vTarget;      // Ŀ������
    vTarget.resize(v.size()); // Ŀ��������Ҫ��ǰ���ٿռ�
    transform(v.begin()+1, v.end()-1, vTarget.begin()+1, TransForm());
    for_each(vTarget.begin(), vTarget.end(), MyPrint());
}
int main()
{
    test01();
    system("pause");
    return 0;
}