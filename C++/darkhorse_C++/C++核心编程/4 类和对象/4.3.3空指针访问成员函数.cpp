#include<iostream>
using namespace std;

class Person {
public:

	void ShowClassName() {
		cout << "����Person��!" << endl;
	}

	void ShowPerson() {
		if (this == NULL) {
            cout<<"haha"<<endl;
			return;
		}
		cout << mAge << endl;
	}

public:
	int mAge;
};

void test01()
{
	// Person * p ;
    Person*p=NULL;
	p->ShowClassName(); //��ָ�룬���Ե��ó�Ա����
	p->ShowPerson();  //���������Ա�������õ���thisָ�룬�Ͳ�������
}

int main() {

	test01();

	system("pause");

	return 0;
}