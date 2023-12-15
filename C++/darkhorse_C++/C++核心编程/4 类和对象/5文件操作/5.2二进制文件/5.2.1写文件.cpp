// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// class Person
// {
//     public:
//         char m_Name[64];
//         int m_Age;
// };

// void test01()
// {
//     ofstream ofs("Person.txt",ios::out|ios::binary);
//     Person p1={"张三",24};
//     ofs.write((const char *)&p1,sizeof(p1));
//     ofs.close();

// }

// void test02()
// {
//     ofstream ofs("test.txt",ios::out|ios::binary);
//     Person p2={"李四",500};
//     ofs.write((const char *)&p2,sizeof(p2));
//     ofs.close();
// }

// int main()
// {
//     test01();
//     // test02();
//     return 0;
// }

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person
{
    public:
        char m_Name[64];
        int m_Age;
};

void test01()
{
    ofstream ofs("test.txt",ios::out|ios::binary);
    Person p1={"张三",24};
    ofs.write((const char*)&p1,sizeof(p1));
    ofs.close();
}

int main()
{
    test01();
    return 0;
}

