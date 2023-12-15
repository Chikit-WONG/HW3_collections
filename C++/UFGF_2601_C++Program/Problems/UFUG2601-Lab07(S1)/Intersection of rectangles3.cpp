#include<iostream>
#include<algorithm>
using namespace std;

class Point
{
public:
    double x,y;
    Point(double x=0,double y=0):x(x),y(y){}

};

class Rectangle
{
public:
    Point a,b;
    Rectangle(Point a=Point(),Point b=Point()):a(a),b(b){}
    Rectangle intersect_with(const Rectangle &r)
    {
        Point bottomLeft(max(a.x,r.a.x),max(a.y,r.a.y));
        Point topRight(min(b.x,r.b.x),min(b.y,r.b.y));
        if(bottomLeft.x>topRight.x || bottomLeft.y>topRight.y)
        {
            return Rectangle();
        }
        else
        {
            return Rectangle(bottomLeft,topRight);
        }
    }

    double area()
    {
        return (b.x-a.x)*(b.y-a.y);
    }
};
int main()
{
    double a_x,a_y,b_x,b_y;
    double c_x,c_y,d_x,d_y;
    cin>>a_x>>a_y>>b_x>>b_y;
    cin>>c_x>>c_y>>d_x>>d_y;
    Rectangle r1(Point(a_x,a_y),Point(b_x,b_y));
    Rectangle r2(Point(c_x,c_y),Point(d_x,d_y));
    Rectangle r=r1.intersect_with(r2);
    cout<<r.area()<<endl;
    return 0;
}