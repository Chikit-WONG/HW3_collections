// #include<iostream>
// #include<fstream>
// using namespace std;
// class Person
// {
//     public:
//         char m_Name[64];
//         int m_Age;
// };

// void test01()
// {
//     ifstream ifs("Person.txt",ios::in|ios::binary);
//     if(!ifs.is_open())
//     {
//         cout<<"文件打开失败"<<endl;
//     }
//     Person p1;

//     ifs.read((char *)&p1,sizeof(p1));
//     cout<<"姓名："<<p1.m_Name<<" 年龄："<<p1.m_Age<<endl;
//     ifs.close();
// }

// int main()
// {
//     test01();
//     return 0;
// }

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Personr
{
    public:
        char m_Namer[64];
        int m_Ager;
};

void test01()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in|ios::binary);
    Personr pr1;
    ifs.read((char *)&pr1,sizeof(pr1));
    cout<<pr1.m_Namer<<" "<<pr1.m_Ager<<endl;
}

int main()
{
    test01();
    return 0;
}

