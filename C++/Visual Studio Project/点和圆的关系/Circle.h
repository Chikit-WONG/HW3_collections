#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Circle
{
public:
	void setR(int a);
	

	int getR();
	

	void setCenter(Point a);
	

	Point getCenter();
	
private:
	int m_R;
	Point m_Center;
};