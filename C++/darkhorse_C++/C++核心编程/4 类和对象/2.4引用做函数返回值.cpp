#include<iostream>
using namespace std;

int& test01() {
	int a = 10; //�ֲ�����
	return a;
}

//���ؾ�̬��������
int& test02() {
	static int a = 20;
	return a;
}

int main() {

	//���ܷ��ؾֲ�����������
	// int& ref = test01();
	// cout << "ref = " << ref << endl;
	// cout << "ref = " << ref << endl;

	//�����������ֵ����ô���뷵������
	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}