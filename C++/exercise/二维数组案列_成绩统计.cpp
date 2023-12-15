#include<iostream>
#include<string>
using namespace std;
int main()
{   
    string name[3]={"张三","李四","王五"};
    int scores[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=scores[i][j];

        }
        cout<<name[i]<<"的成绩为："<<sum<<endl;
        cout<<&scores[0][0]<<endl;
    }
    return 0;
}