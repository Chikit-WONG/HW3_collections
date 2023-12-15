#include<iostream>
using namespace std;
int main()
{
	double a = 2.0f;
	cout << int(a) << endl;
	int arr[] = { 1,2,3,4 };
	cout << int(arr) << endl;
	cout << int(&arr[0]) << endl;
	cout << int(&arr[1]) << endl;
	int* p;
	p = arr;
	cout << int(p) << endl;
	p++;
	cout << int(p) << endl;
	return 0;
}