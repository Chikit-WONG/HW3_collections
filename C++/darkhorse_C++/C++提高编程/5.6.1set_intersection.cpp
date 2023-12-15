#include <vector>
#include <algorithm>
#include <iostream>
#include<functional>
using namespace std;
class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    v1.push_back(6);
    v1.push_back(6);
    v1.push_back(6);
    v1.push_back(6);
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    //for_each(v2.begin(),v2.end(),myPrint());
    vector<int> vTarget;
    // ȡ���������С��ֵ��Ŀ���������ٿռ�
    vTarget.resize(min(v1.size(), v2.size()));
    // ����Ŀ�����������һ��Ԫ�صĵ�������ַ
    vector<int>::iterator itEnd =
        set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin(),greater<int>());
    for_each(vTarget.begin(),vTarget.end(),myPrint());
    cout<<endl;
    for_each(vTarget.begin(), itEnd, myPrint());
    cout << endl;
    cout<<*itEnd<<endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}