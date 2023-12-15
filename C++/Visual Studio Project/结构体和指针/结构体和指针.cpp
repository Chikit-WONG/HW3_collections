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
    s stu[] = {
        {"Jack1",10,100},
        {"Jack2",11,200},
        {"Jack3",12,300}
    };
    cout << "the size of string:"<<sizeof(string) << endl;
    s* p = stu;
    cout <<int( p) << endl;
    cout << "name:" << p->name << " " << "age:" << p->age << " " << "score:" << p->score << endl;
    p++;
    cout << int(p) << endl;
    cout << "name:" << p->name << " " << "age:" << p->age << " " << "score:" << p->score << endl;
    return 0;
}