#include"myArray.hpp"
using namespace std;

class Person
{
public:
    Person(){}
    Person(string name,int age):name(name),age(age){}

    string name;
    int age;
};

template<typename T>
void printArray(MyArray<T> &arr)
{
    for(int i=0;i<arr.getSize();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printPersonArray(MyArray<Person> &arr)
{
    for(int i=0;i<arr.getSize();i++)
    {
        cout<<arr[i].name<<" "<<arr[i].age<<endl;
    }
}

void test01()
{
    MyArray<int> arr1(5);
    for(int i=0;i<arr1.getCapacity();i++)
    {
       arr1.push_back(i);
    }
    printArray(arr1);
    arr1.push_back(5);
    printArray(arr1);
    arr1.pop_back();
    printArray(arr1);

}

void test02()
{
	//��������
	MyArray<Person> pArray(10);
	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);

	//��������
	pArray.push_back(p1);
	pArray.push_back(p2);
	pArray.push_back(p3);
	pArray.push_back(p4);
	pArray.push_back(p5);

	printPersonArray(pArray);

	cout << "pArray�Ĵ�С:" << pArray.getSize() << endl;
	cout << "pArray������:" << pArray.getCapacity() << endl;

}

int main()
{
    test01();
    test02();
    return 0;
}