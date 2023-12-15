#include <iostream>
using namespace std;

class MyBaseClass
{
public:
    MyBaseClass()
    {
        std::cout << "Base class constructor called." << std::endl;
    }
};
class MyDerivedClass : public MyBaseClass
{
public:
    MyDerivedClass()
    {
        std::cout << "Derived class constructor called." << std::endl;
    }
};
int main()
{
    MyDerivedClass obj; // Creating an instance of the derived class
    return 0;
}