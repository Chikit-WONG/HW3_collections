#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void test01()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    char bul[1024]={0};
    while(ifs>>bul)
    {
        cout<<bul<<endl;
    }
    ifs.close();
}

void test02()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    char bul[1024]={0};
    while(ifs.getline(bul,sizeof(bul)))
    {
        cout<<bul<<endl;
    }
    ifs.close();
}

void test03()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    string bul;
    while(getline(ifs,bul))
    {
        cout<<bul<<endl;
    }
    ifs.close();
}

void test04()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    char c;
    while((c=ifs.get())!=EOF)
    {
        cout<<c;
    }
    ifs.close();
}

int main()
{
    // test01();
    // test02();
    // test03();
    // test04();
    return 0;
}