#ifndef WORKERMANAGER
#define WORKERMANAGER
#include<iostream>
#include<fstream>
#include"employee.h"
#include"manager.h"
#include"boss.h"
#define FILENAME "empFile.txt"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	~WorkerManager();
	void Show_Menu();
	void exitSystem();
	void Add_Emp();
	void save();
	int getEmpNum();
	void init_Emp();
	void show_Emp();
	int IsExist(int id);
	void Del_Emp();
	void Mod_Emp();
	void Find_Emp();
	void Sort_Emp();
	void Clean_File();

	int m_EmpNum;
	Worker** m_EmpArray;
	bool m_FileIsEmpty;
};

#endif