#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
    string Sname;
    int score;
};
struct teacher
{
    string Tname;
    student s[5];
};

void allocateSpace(teacher tArray[],int len)
{
    string nameSeed="ABCDE";
    for(int i=0;i<len;i++)
    {
        tArray[i].Tname="Teacher_";
        tArray[i].Tname+=nameSeed[i];
        for(int j=0;j<5;j++)
        {
            tArray[i].s[j].Sname="Student_";
            tArray[i].s[j].Sname+=nameSeed[j];
            tArray[i].s[j].score=rand()%61+40;
        }

    }
   
}

 void printTeachers(teacher tArray[],int len)
    {
        for(int i=0;i<len;i++)
        {
            cout<<"Teacher's name:"<<tArray[i].Tname<<endl;
            for(int j=0;j<5;j++)
            {
            cout<<"\tStudnt's name:"<<tArray[i].s[j].Sname<<" Srudent's score:"<<tArray[i].s[j].score<<endl;
            }
            cout<<endl;
        }
    }
int main()
{
   srand((unsigned int)time(NULL));
   teacher tArray[3];
   int len=sizeof(tArray)/sizeof(tArray[0]);
   allocateSpace(tArray,len);
   printTeachers(tArray,len);
   return 0;

}



