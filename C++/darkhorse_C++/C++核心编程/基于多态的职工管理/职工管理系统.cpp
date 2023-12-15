#include"workerManager.h"



// void test()
// {
// 	Worker* worker = nullptr;
// 	worker = new Employee(1, "张三", 1);
// 	worker->showInfo();
// 	delete worker;

// 	worker = new Manager(2, "李四", 2);
// 	worker->showInfo();
// 	delete worker;

// 	worker = new Boss(3, "王五", 3);
// 	worker->showInfo();
// 	delete worker;
// }

int main()
{
	//test();
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择：";
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.exitSystem(); 
			break;
		case 1:
			wm.Add_Emp();
			break; 
		case 2:
			wm.show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}