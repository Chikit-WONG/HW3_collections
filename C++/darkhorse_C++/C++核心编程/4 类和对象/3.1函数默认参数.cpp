#include<iostream>
using namespace std;


//1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
int func2(int a , int b );
int func2(int a=10, int b=10) {
	return a + b;
}

int main() {

	cout << "ret = " << func2(20, 20) << endl;
	cout << "ret = " << func2(100) << endl;

	system("pause");

	return 0;
}