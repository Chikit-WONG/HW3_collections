#include <string>
#include <iostream>
using namespace std;
// 1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class MyAdd
{
public:
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }

    int operator()()
    {
        return 10;
    }
};
void test01()
{
    MyAdd myAdd;
    cout << myAdd() << endl;
}
// 2����������������Լ���״̬
class MyPrint
{
public:
    MyPrint()
    {
        count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        count++; // ͳ��ʹ�ô���
    }
    int count; // �ڲ��Լ���״̬
};
void test02()
{
    MyPrint myPrint;
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");
    cout << "myPrint���ô���Ϊ�� " << myPrint.count << endl;
}
// 3���������������Ϊ��������
void doPrint(MyPrint &mp, string test)
{
    mp(test);
}
void test03()
{
    MyPrint myPrint;
    doPrint(myPrint, "Hello C++");
}
int main()
{
    // test01();
    // test02();
    //test03();
    system("pause");
    return 0;
}