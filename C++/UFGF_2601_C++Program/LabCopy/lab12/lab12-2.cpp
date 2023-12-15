/*
Lab 12, Task 2: From Virtual To Real

Goals:
+ Learn the usage of virtual functions
+ Learn the difference between overriding real function an virtual function
*/

#include <iostream>

using namespace std;

class Shape{
public:

    // If we use the non-virtual declarations, the implementation used by 
    // the parent pointer will be fixed.

   virtual  double area() const{return 0;}
    
    // If we change them into the virtual declarations, the parent pointer will use
    // different implementations

	// virtual double area() const = 0;

    // TODO: Try to declare the virtual function for perimeter()
    virtual int perimeter() const=0;

};

class Round : public Shape{
public:
            Round(int r) : r(r) {};
        double area() const override;
    int perimeter() const override;
private:
        int r;
    };

    double Round::area() const{
        return 3.1415*r*r;
    }

    int Round::perimeter() const{
        return 3.1415*r*2;
    }

    class Square : public Shape{
    public:
        Square(int l) : l(l) {};
        double area() const;
    int perimeter() const;
    private:
        int l;
    };

    double Square::area() const {
        return l*l;
    }

    int Square::perimeter() const{
        return l*4;
    }

int main(){

    // We use a base class pointer to point to different children classes.
    Shape* ptr;

    Round A(5);
    Square B(5);


    // Try virtual and non-virtual declaration to see the difference.
    ptr = &A;
    cout << "Round Pointer Area:" << ptr->area() << endl;
    cout << "Round Object  Area:" << A.area() << endl;
    cout << "Round Pointer Perimeter:" << ptr->perimeter() << endl;
    cout << "Round Object  Perimeter:" << A.perimeter() << endl;

    ptr = &B;
    cout << "Square Pointer Area:" << ptr->area() << endl;
    cout << "Square Object  Area:" << B.area() << endl;
    cout << "Round Pointer Perimeter:" << ptr->perimeter() << endl;
    cout << "Round Object  Perimeter:" << B.perimeter() << endl;

    return 0;
}