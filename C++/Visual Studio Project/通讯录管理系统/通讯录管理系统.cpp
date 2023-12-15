#include<iostream>
#include<string>
using namespace std;
# define Max 1000
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
struct Addressbooks
{
	struct Person personArray[Max];
	int m_Size;
};
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == Max)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		cout << "������������" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		/*cin >> abs->personArray[abs->m_Size].m_Name;
		cout << abs->personArray[abs->m_Size].m_Name << endl;*/
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}

		}
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "�������ͥסַ��" << endl;
		string address = "";
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
		
	}
}

void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex==1 ?"��": "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
			

		}
		system("pause");
		system("cls");
	}
}

int isExist(Addressbooks *abs, string name)
{
	for (int i = 0; i <abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			
			return i;

		}
		
	}
	return -1;
}
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
	
}

void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}

void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name="";
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}
		abs->personArray[ret].m_Sex = sex;
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "�������ͥסַ��" << endl;
		string address = "";
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* abs)
{
	cout << "ȷ��Ҫ���������ϵ�ˣ�" << endl;
	cout << "1---ȷ��" << endl;
	cout << "2---ȡ��" << endl;
	int sure;
	cin >> sure;
	if (sure == 1)
	{
		abs->m_Size = 0;
		cout << "ͨѶ¼�����" << endl;
	}
	else if(sure==2)
	{
		cout << "ȡ���ɹ�" << endl;
	}
	else
	{
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
}

int main()
{
	Addressbooks abs;
	abs.m_Size = 0;
	int select;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
		{
			//	string name;
			//	cout << "������ɾ���˵�������" << endl;
			//	cin >> name;;
			//	
			//	/*if (isExist(&abs, name) == -1)
			//	{
			//		cout << "���޴���" << endl;
			//		system("pause");
			//		system("cls");
			//	}
			//	else
			//	{
			//		cout << "�д���" << endl;
			//		system("pause");
			//		system("cls");
			//	}*/
			deletePerson(&abs);
		}

			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		dafault:
			break;

		}
	}

	system("pause");
	return 0;
}
