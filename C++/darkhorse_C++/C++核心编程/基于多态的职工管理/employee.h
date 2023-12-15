#ifndef EMPLOYEE
#define EMPLOYEE
#include"worker.h"

class Employee :public Worker
{
public:
	Employee(int id, string name, int dId);
	void showInfo() override;
	string getDepName() override;
};

#endif