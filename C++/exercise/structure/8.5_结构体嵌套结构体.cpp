#include<iostream>
#include<string>
using namespace std;

  struct student
    {
        string name;
        int age;
        int score;
    };
    struct teacher
    {
        int id;
        string name;
        int age;
        student stu[3];
    };
int main()
{
  teacher t1;
  cin>>t1.id>>t1.name>>t1.age;
    for(int i=0;i<t1.stu/t1.stu[0];i++)
    {
        cin>>t1.stu[i].name>>t1.stu[i].age>>t1.stu[1].score;
    }

  cout<<t1.id<<" "<<t1.name<<" "<<t1.age<<endl;
  for(int i=0;i<sizeof(t1.stu/t1.stu[0]);i++)
    {
        cout<<t1.stu[i].name<<t1.stu[i].age<<t1.stu[i].score<<" "<<endl;;
    }
  return 0;
}