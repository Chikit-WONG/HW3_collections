#include <iostream>
#include <optional>
#include <math.h>
using namespace std;
// In this code, we try to define classes for the basic concepts in geometry
// Let's start with the basic 2D spaces and try to complete the program
// The most basic concept in a 2D space is, of course, points.
class Point
{
public:
    double x, y;
    // Build a point from its coordinate
    Point():x(0),y(0){};
    Point(double x, double y) : x(x), y(y){};
    // Some computations for points
};
// After that, lines can be constructed from the points
class Line
{
public:
    // We also know that two points determine a line
    Point start, end;
    Line(){};
    Line(Point start, Point end) : start(start), end(end){};
};
// There are operations for two lines as well
Point intersection(const Line &l1, const Line &l2)
{
    Point intersect_point;
    // TODO: Calculate the intersection point
    double a1 = l1.end.y - l1.start.y;
    double b1 = l1.start.x - l1.end.x;
    double c1 = a1 * l1.start.x + b1 * l1.start.y;

    double a2 = l2.end.y - l2.start.y;
    double b2 = l2.start.x - l2.end.x;
    double c2 = a2 * l2.start.x + b2 * l2.start.y;

    double delta = a1 * b2 - a2 * b1;
    if (delta == 0)
    {
        return intersect_point;
    }
    
    intersect_point.x = (b2 * c1 - b1 * c2) / delta;
    intersect_point.y = (a1 * c2 - a2 * c1) / delta;
    return intersect_point;
}
// We also have shapes in 2D space, e.g. rectangles
class Rectangle
{
public:
    // Two points are enough to define a rectangle
    Point a, b;
    // However, we need to give it 4 lines as the boundary
    Line h1, h2, w1, w2;
    Rectangle(){};
    Rectangle(Point a, Point b) : a(a), b(b)
    {
        // Here we need to construct lines from the points
        // TODO
        h1 = Line(a, Point(a.x, b.y));
        h2 = Line(Point(a.x, b.y), b);
        w1 = Line(a, Point(b.x, a.y));
        w2 = Line(Point(a.x, b.y), b);
    };
    double area(){
        // TODO
         return (b.x - a.x) * (b.y - a.y);
    };

    // and some functions too
    Rectangle intersect_with(Rectangle const &r)
    {
        // TODO
        Point topLeft(std::max(a.x, r.a.x), std::max(a.y, r.a.y));
        Point bottomRight(std::min(b.x, r.b.x), std::min(b.y, r.b.y));
        if(topLeft.x > bottomRight.x || topLeft.y > bottomRight.y)
            return Rectangle();

        return Rectangle(topLeft, bottomRight);
    }
};

// TODO: Implement all the functions and test them
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
