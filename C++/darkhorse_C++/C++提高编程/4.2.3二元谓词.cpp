#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// ��Ԫν��
class MyCompare
{
public:
    template<typename T>
    bool operator()(T num1, T num2)
    {
        return num1 > num2;
    }
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    // Ĭ�ϴ�С����

    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "----------------------------" << endl;
    // ʹ�ú�������ı��㷨���ԣ�����Ӵ�С
    sort(v.begin(), v.end(), MyCompare());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // sort(v.rbegin(), v.rend());
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}