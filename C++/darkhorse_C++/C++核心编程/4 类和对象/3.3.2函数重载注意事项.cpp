#include<iostream>
using namespace std;

void func(int &a)
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int &a)
{
	cout << "func (const int &a) ���� " << endl;
}

int main()
{
    int  a=10;
    func(a);
    func(10);
    return 0;

}
