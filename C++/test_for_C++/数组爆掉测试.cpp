#include<iostream>
#include<string>
using namespace std;
struct subtest
{
	int a;
	string b;
};
struct test
{
	subtest arr[3];
};
int main()
{
	test abs;
	
	cout << abs.arr[0].a << endl;
    cout<<abs.arr[0].b<<endl;
	system("pause");
	return 0;
}