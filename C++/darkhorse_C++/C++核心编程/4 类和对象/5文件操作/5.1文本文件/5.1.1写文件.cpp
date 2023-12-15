// #include<iostream>
// #include<fstream>
// using namespace std;

// void test01()
// {
//     ofstream ofs;
//     ofs.open("test.txt",ios::out);
//     ofs<<"¹þ¹þ"<<endl;
//     ofs<<"heihei"<<endl; 
//     ofs.close();
// }

// int main()
// {
//     test01();
//     return 0;
// }


#include<iostream>
#include<fstream>
using namespace std;

void test01()
{
    ofstream ofs("test1.txt",ios::out);
    // ofs.open("test.txt",ios::out);
    // ofs.open("test1.txt",ios::out);
    ofs<<"haha"<<" ";
    ofs<<"heihei"<<endl;
    ofs<<"lalala"<<endl;
    ofs.close();
    ofs.open("test2.txt",ios::out);
    ofs<<"haha"<<" ";
    ofs<<"heihei"<<endl;
    ofs<<"lalala"<<endl;
    ofs.close();
}

int main()
{
    test01();
    return 0;
}