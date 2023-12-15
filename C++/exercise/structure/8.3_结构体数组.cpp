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
    };
    student arr[]={
        {"Jack1",10,100},
        {"Jack2",11,200},
        {"Jack3",12,300}
    };
    arr[0].name="Jack4";
    for(int i=0;i<3;i++)
    {
        cout<<"name:"<<arr[i].name<<" "<<"age:"<<arr[i].age<<" "<<"score:"<<arr[i].score<<endl;
        
    }
    return 0;
}