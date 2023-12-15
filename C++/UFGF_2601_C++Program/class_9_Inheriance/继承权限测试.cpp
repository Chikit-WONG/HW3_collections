#include<iostream>
using namespace std;

class Class1
{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

class Class2:private Class1
{
    public:
        int calculate()
        {
            return a+b+c;
        }
};