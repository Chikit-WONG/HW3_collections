#include<iostream>
#include<string>

using namespace std;

void test01()
{
    string str1="zhangsan@qq.com";
    int pos=str1.find('@');
    string substr=str1.substr(0,pos);
    cout<<substr<<endl;
}

int main()
{
    test01();
    return 0;
}