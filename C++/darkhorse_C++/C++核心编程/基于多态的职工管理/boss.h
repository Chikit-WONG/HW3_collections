#ifndef BOSS
#define BOSS
#include"worker.h"

class Boss :public Worker
{
public:
	Boss(int id, string name, int dId);
	void showInfo() override;
	string getDepName() override;
};

#endif