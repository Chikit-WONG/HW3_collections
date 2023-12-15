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
    Person p("张三","apple MAX");
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
// 		cout << "Phone构造" << endl;
// 	}

// 	~Phone()
// 	{
// 		cout << "Phone析构" << endl;
// 	}

// 	string m_PhoneName;

// };


// class Person
// {
// public:

// 	//初始化列表可以告诉编译器调用哪一个构造函数
// 	Person(string name, string pName) :m_Name(name), m_Phone(pName)
// 	{
// 		cout << "Person构造" << endl;
// 	}

// 	~Person()
// 	{
// 		cout << "Person析构" << endl;
// 	}

// 	void playGame()
// 	{
// 		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
// 	}

// 	string m_Name;
// 	Phone m_Phone;

// };
// void test01()
// {
// 	//当类中成员是其他类对象时，我们称该成员为 对象成员
// 	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
// 	//析构顺序与构造相反
// 	Person p("张三" , "苹果X");
// 	p.playGame();

// }


// int main() {

// 	test01();

// 	system("pause");

// 	return 0;
// }