#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void printArr(int val)//�Զ����������ӡ
{
	cout << val << " ";
}
int targetArr(int val)//���˹���������ԭ���ݻ����ϼ�100
{
	return val + 100;
}

void test01()
{
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//ԭ����
	int target[15];//Ŀ������,Ŀ������ĳ��ȱ��벻С��ԭ����
	transform(arr, arr + 10, target, targetArr);
	cout << "ԭ�����ӡ��";
	for_each(arr, arr + 10, printArr);
	cout << "\nĿ�������ӡ:";
	for_each(target, target + 10, printArr);

    transform(arr, arr + 10, &target[0], targetArr);
    cout << "\nĿ�������ӡ:";
	for_each(target, target + 10, printArr);
}

// void test02()
// {
//     vector<int> v1;
//     for(int i=0;i<10;i++)
//     {
//         v1.push_back(i);
//     }
//     vector<int>::iterator begin1=v1.begin();
//     vector<int>::iterator end1=v1.end();

//     vector<int> v2;
//      for(int i=10;i<20;i++)
//     {
//         v2.push_back(i);
//     }
//     vector<int>::iterator begin2=v2.begin();
//     vector<int>::iterator end2=v2.end();

// }

int main()
{
    test01();

    return 0;
}