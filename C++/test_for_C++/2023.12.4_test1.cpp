#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    void operator()(string text)
    {
        std::cout<<text<<std::endl;
    }
};

int main()
{
    string a="hello";
    Person()(a);
    return 0;
}