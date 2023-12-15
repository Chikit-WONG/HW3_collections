#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
    Phone(string name)
    {
        cout<<"Calling constructor of Phone."<<endl;
        m_PName=name;
    }
    ~Phone()
    {
        cout<<"Calling destructive function of Phone."<<endl;
    }
    string m_PName;
};

class Person
{
public:
    Person(string name,string phone):m_name(name),m_phone(phone)
    {
        cout<<"Calling constructor of Person."<<endl;
    }

    ~Person()
    {
        cout<<"Calling destructive function of Person."<<endl;
    }
    string m_name;
    Phone m_phone;
};

void test01()
{
    Person p("����","apple MAX");
    cout<<p.m_name<<"have"<<p.m_phone.m_PName<<endl;

}

int main()
{
    test01();
    return 0;
}


// class Phone
// {
// public:
// 	Phone(string name)
// 	{
// 		m_PhoneName = name;
// 		cout << "Phone����" << endl;
// 	}

// 	~Phone()
// 	{
// 		cout << "Phone����" << endl;
// 	}

// 	string m_PhoneName;

// };


// class Person
// {
// public:

// 	//��ʼ���б���Ը��߱�����������һ�����캯��
// 	Person(string name, string pName) :m_Name(name), m_Phone(pName)
// 	{
// 		cout << "Person����" << endl;
// 	}

// 	~Person()
// 	{
// 		cout << "Person����" << endl;
// 	}

// 	void playGame()
// 	{
// 		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
// 	}

// 	string m_Name;
// 	Phone m_Phone;

// };
// void test01()
// {
// 	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
// 	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
// 	//����˳���빹���෴
// 	Person p("����" , "ƻ��X");
// 	p.playGame();

// }


// int main() {

// 	test01();

// 	system("pause");

// 	return 0;
// }