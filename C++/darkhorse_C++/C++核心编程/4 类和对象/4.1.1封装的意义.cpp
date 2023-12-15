#include<iostream>
#include<string>
using namespace std;
class student
{
public:

    string name;
    int number;

    void show()
    {
        cout<<name<<endl;
        cout<<number<<endl;
    }
};

int main()
{
    student s1;
    s1.name="Jack";
    s1.number=114514;
    s1.show();
    return 0;

}