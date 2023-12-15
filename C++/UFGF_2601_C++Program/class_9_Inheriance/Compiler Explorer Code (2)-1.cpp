#include <cstdio>

class Shape {
public:
    virtual void display() {}
};


class Circle : public Shape {
public:
    void display() override {}
};

void foo1() {
    Circle c;
    Shape *shape = &c;
    
    shape->display();
}

void foo2() {

    Circle c;
    c.display();
}


int main()
{
    foo1();
    foo2();
}
