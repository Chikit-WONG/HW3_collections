#include<iostream>
#include<string>
#include <map>

using namespace std;
//���Һ�ͳ��
void test01()
{
multimap<int, int>m;
m.insert(pair<int, int>(1, 10));
m.insert(pair<int, int>(2, 20));
m.insert(pair<int, int>(3, 30));
m.insert(pair<int, int>(3, 40));
m.insert(pair<int, int>(3, 50));
m.insert(pair<int, int>(3, 60));
//����
multimap<int, int>::iterator pos = m.find(3);
if (pos != m.end())
{
cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
}
else
{
cout << "δ�ҵ�Ԫ��" << endl;
}
//ͳ��
int num = m.count(3);
cout << "num = " << num << endl;
}
int main() {
test01();
system("pause");
return 0;
}