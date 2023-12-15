#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class FileInfo
{
    friend ostream &operator<<(ostream &out,const FileInfo &info);
    friend FileInfo GetInfo(ifstream &ifs);

public:
    FileInfo() : chars(0), lines(0) {}

private:
    unsigned int chars;
    unsigned int lines;
};

ostream &operator<<(ostream &out,const FileInfo &info)
{
    out << "chars: " << info.chars << " lines: " << info.lines << endl;
    return out;
}

FileInfo GetInfo(ifstream &ifs)
{

    string line;
    FileInfo result;
    while (getline(ifs, line))
    {
        result.chars += line.length();
        result.lines += 1;
    }
    return result;
}
int main()
{

    bool judge = true;
    while (judge)
    {
        cout << "Please enter a number to seclect the mode: ";
        unsigned int n;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            string filename;
            cout << "Please enter the filename: ";
            cin>>filename;
            ifstream ifs(filename.c_str(), ios::in);
            if (!ifs.is_open())
            {
                cerr << "Error!" << endl;
                break;
            }
            FileInfo res = GetInfo(ifs);
            cout << res << endl;
            system("pause");
            system("cls");
            break;
        }

        default:
            judge = false;
            cout<<"byebye"<<endl;
            break;
        }
    }
}