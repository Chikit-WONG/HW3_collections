#include<iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Calling the constructor of Person"<<endl;
    }

    ~Person()
    {
        cout<<"Calling the generative function of Person"<<endl;
    }
};

int main()
{
    Person p;
    system("pause");
    return 0;

}

