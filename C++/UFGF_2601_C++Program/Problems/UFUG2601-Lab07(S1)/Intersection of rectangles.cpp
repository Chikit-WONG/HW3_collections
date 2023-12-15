#include <iostream>
#include <algorithm>
using namespace std;

class Point
{
public:
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y){};
};

// class Line
// {
// public:
//     Point start, end;
//     Line(Point start = Point(), Point end = Point()) : start(start), end(end){};
// };

// Point intersection(const Line &l1, const Line &l2)
// {
//     Point intersect_point;
//     double a1 = l1.end.y - l1.start.y;
//     double b1 = l1.start.x - l1.end.x;
//     double c1 = a1 * l1.start.x + b1 * l1.start.y;

//     double a2 = l2.end.y - l2.start.y;
//     double b2 = l2.start.x - l2.end.x;
//     double c2 = a2 * l2.start.x + b2 * l2.start.y;

//     double delta = a1 * b2 - a2 * b1;
//     if (delta == 0)
//     {
//         return intersect_point;
//     }
    
//     intersect_point.x = (b2 * c1 - b1 * c2) / delta;
//     intersect_point.y = (a1 * c2 - a2 * c1) / delta;
//     return intersect_point;
// }

class Rectangle
{
public:
    Point a, b;
    Rectangle(Point a = Point(), Point b = Point()) : a(a), b(b){};

    double area(){
         return (b.x - a.x) * (b.y - a.y);
    };

    Rectangle intersect_with(Rectangle const &r)
    {
        Point bottomLeft(std::max(a.x, r.a.x), std::max(a.y, r.a.y));
        Point topRight(std::min(b.x, r.b.x), std::min(b.y, r.b.y));

        if (bottomLeft.x > topRight.x || bottomLeft.y > topRight.y)
        {
            return Rectangle();
        }
        else
        {
            return Rectangle(bottomLeft, topRight);
        }
    }
};

int main()
{
    double a_x, a_y, b_x, b_y;
    double c_x, c_y, d_x, d_y;
    cin >> a_x >> a_y >> b_x >> b_y;
    cin >> c_x >> c_y >> d_x >> d_y;
    Rectangle r1(Point(a_x, a_y), Point(b_x, b_y));
    Rectangle r2(Point(c_x, c_y), Point(d_x, d_y));
    Rectangle overlap_r;
    overlap_r = r1.intersect_with(r2);
    cout << overlap_r.area() << endl;

    return 0;
}