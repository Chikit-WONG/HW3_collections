#ifndef MANAGER
#define MANAGER
#include"worker.h"

class Manager :public Worker
{
public:
	Manager(int id, string name, int dId);
	void showInfo() override;
	string getDepName() override;
};

#endif