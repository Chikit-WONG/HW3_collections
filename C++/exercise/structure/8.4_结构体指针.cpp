#include<iostream>
#include<string>
using namespace std;
int main()
{
    struct s
    {
        string name;
        int age;
        int score;
    };
    s stu={"Jack",10,100};
    s *p=&stu;
    cout<<p<<endl;
    cout<<"name:"<<p->name<<" "<<"age:"<<p->age<<" "<<"score:"<<p->score<<endl;
    return 0;
}