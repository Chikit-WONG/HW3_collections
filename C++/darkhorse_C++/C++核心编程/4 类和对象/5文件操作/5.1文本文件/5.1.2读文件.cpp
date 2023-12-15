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
    test04();
    
    // char test1[]={'h','a','h','a','\0'};
    // cout<<test1<<endl;
    // cout<<sizeof(test1)<<endl;
    // string test2="haha";
    // cout<<sizeof(test2)<<endl;
    // cout<<test2.length()<<endl;

    return 0;
}


	
