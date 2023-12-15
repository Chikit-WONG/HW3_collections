#include<iostream>
using namespace std;

void func(int &a)
{
	cout << "func (int &a) 调用 " << endl;
}

void func(const int &a)
{
	cout << "func (const int &a) 调用 " << endl;
}

int main()
{
    int  a=10;
    func(a);
    func(10);
    return 0;

}
