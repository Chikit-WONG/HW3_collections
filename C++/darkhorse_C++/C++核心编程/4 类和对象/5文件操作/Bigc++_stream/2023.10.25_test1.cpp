#include <iostream>
#include<sstream>
#include <fstream>
#include <string>
#include<iomanip>
using namespace std;

void test01()
{
    ofstream ofs;
    ofs.open("input.dat", ios::out);
    ofs << "haha"
        << " ";
    ofs << "heihei" << endl;
    ofs << "lalala" << endl;
    ofs.close();
}

void test02()
{
    ifstream in_file;
    in_file.open("input.dat", ios::in);
    if (in_file.fail())
    {
        cout << "文件打开失败" << endl;
    }
    in_file.close();
}

void test03()
{
    // cout << "Please enter a file name:";
    // string filename;
    // cin >> filename;
    // ifstream ifs;
    // ifs.open(filename.c_str(), ios::in);
    ifstream ifs;
    ifs.open("input.dat",ios::in);
    if(ifs.fail())
    {
        cout<<"文件打开失败"<<endl;
    }
    string bul;
    while (getline(ifs, bul))
    {
        cout << bul << endl;
    }
    ifs.close();
}

void test04()
{
    cout << "Please enter a file name:";
    string filename;
    cin >> filename;
    ifstream ifs;
    ifs.open(filename.c_str(), ios::in);
    if(ifs.fail())
    {
        cout<<"文件打开失败"<<endl;
    }
    string name;
    ifs>>name;
    cout<<name<<endl;
    ifs.close();
}

void test05()
{
    ofstream ofs;
    ofs.open("input.dat",ios::out);
    ofs<<setfill('0')<<setw(10)<<"1234"<<endl<<setfill(' ');
    ofs<<setw(10)<<4321<<endl;
    ofs.close();
    
    ofstream ofs2;
    ofs2.open("input.dat",ios::app);
    ofs<<setw(10)<<"1234"<<endl;
    ofs<<setw(10)<<4321<<endl;
    ofs.close();
}

void test06()
{
    istringstream ifs;
    ifs.str("January 24 , 1973");
    string month;
    int day;
    string comma;
    int year;
    ifs>>month>>day>>comma>>year;
    cout<<"month:"<<month<<endl;
    cout<<"day:"<<day<<endl;
    cout<<"comma:"<<comma<<endl;
    cout<<"year:"<<year<<endl;
    ostringstream ofs;
    ofs<<month<<" "<<day<<comma<<year;
    string output=ofs.str();
    cout<<output<<endl;
}

int main()
{

   
    bool more = true;
    while (more)
    {
        cout << "Please enter a number:";
        unsigned short n;
        cin >> n;
            switch (n)
            {
                case 1:
                {
                    test01();
                    system("pause");
                    system("cls");
                    break;
                }
                case 2:
                {
                    test02();
                    system("pause");
                    system("cls");
                    break;
                }
                case 3:
                {
                    test03();
                    system("pause");
                    system("cls");
                    break;
                }
                case 4:
                {
                    test04();
                    break;
                }
                case 5:
                {
                    test05();
                    break;
                }
                case 6:
                {
                    test06();
                    break;
                }
                default:
                {
                    cout<<"Bye bye"<<endl;
                    more=false;
                    
                    
                }
            }
    }

    return 0;
}