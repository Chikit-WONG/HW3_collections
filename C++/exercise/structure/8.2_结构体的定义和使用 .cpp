#include<iostream>
#include<string>
using namespace std;
int main()
{
    struct student
    {
        string name;
        int age;
        int score;
    }stu2;
    struct student stu1;
    stu1.name="Jack";
    stu1.age=10;
    stu1.score=100;
    cout<<"name:"<<stu1.name<<" "<<"age:"<<stu1.age<<" "<<"score:"<<stu1.score<<endl;
    student stu2={"Jack2",11,200};
    cout<<"name:"<<stu2.name<<" "<<"age:"<<stu2.age<<" "<<"score:"<<stu2.score<<endl;
    
    return 0;


}