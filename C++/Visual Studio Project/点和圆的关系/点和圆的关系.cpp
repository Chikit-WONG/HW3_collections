#include<cmath>
#include"Point.h"
#include"Circle.h"
//{
//public:
//	void setx(int a)
//	{
//		m_x = a;
//	}
//
//	void sety(int a)
//	{
//		m_y = a;
//	}
//
//	int getx()
//	{
//		return m_x;
//		
//	}
//
//	int gety()
//	{
//		return m_y;
//
//	}
//
//private:
//	int m_x;
//	int m_y;
//};

//class Circle
//{
//public:
//	void setR(int a)
//	{
//		m_R = a;
//	}
//
//	int getR()
//	{
//		return m_R;
//	}
//
//	void setCenter(Point a)
//	{
//		m_Center = a;
//	}
//
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};

void isInCircle(Circle &c,Point &p)
{
	double distance = sqrt(pow(c.getCenter().getX() - p.getX(), 2) + pow(c.getCenter().getY() - p.getY(), 2));
	/*cout << distance << endl;*/
	/*cout << sqrt(121) << endl;
	cout << sqrt(pow(10 - 10, 2) + pow(10 - 11, 2)) << endl;*/
	if (distance < c.getR())
	{
		cout << "Point within circle." << endl;
	}
	else if (distance >c.getR())
	{
		cout << "Point outside circle." << endl;
	}
	else
	{
		cout << "Point on the circle." << endl;
	}
}

int main()
{
	int cx, cy, r, x, y;
	Circle c;
	Point center;
	cout << "Enter two number to set the center of the circle:" << endl;
	cin >> cx >> cy;
	center.setX(cx);
	center.setY(cy);
	cout << "Enter a number to set the radius:" << endl;
	cin >> r;
	c.setR(r);
	c.setCenter(center);
	Point p;
	cout << "Enter two number to set the position of the point:" << endl;
	cin >> x >> y;
	p.setX(x);
	p.setY(y);
	isInCircle(c, p);
	system("pause");
	return 0;
}