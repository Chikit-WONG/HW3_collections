#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class FileInfo
{

public:
    FileInfo() : numbers_of_lines(0), numbers_of_chars(0)
    {
    }

    unsigned int numbers_of_lines;
    unsigned int numbers_of_chars;
};

ostream &operator<<(ostream &out, FileInfo fi)
{
    out << fi.numbers_of_chars << " " << fi.numbers_of_lines << endl;
    return out;
}

FileInfo getFileInfo(ifstream &in)
{
    FileInfo result;
    string line;
    while (getline(in, line))
    {
        result.numbers_of_lines += 1;
        result.numbers_of_chars += line.length();
    }
    return result;
}

void func1()
{
    while (true)
    {
        string filename;
        cout << "Please enter the filename:";
        cin >> filename;
        ifstream inFile(filename, ios::in);
        if (!inFile.is_open())
        {
            break;
        }
        FileInfo res = getFileInfo(inFile);
        cout << res << endl;
        inFile.close();
    }
}

void func2()
{
    string fileName;
    cout << "Please enter the filename:";
    cin >> fileName;
    ofstream ofs(fileName, ios::out);
    unsigned int n;
    cout << "Please enter how many line do you want to enter:";
    cin >> n;
    for (unsigned int i = 1; i <= n; i++)
    {
        string content;
        cin >> content;
        ofs << content<<endl;
    }
    ofs.close();
}

int main()
{
    int n;

    bool judge=true;
    while (judge)
    {
        cout<<"Enter the mode you select:";
        cin>>n;
        switch (n)
        {
        case 1:
        {
            func1();
            break;
        }

        case 2:
        {
            func2();
            break;
        }

        default:
        {
            judge=false;
            break;
        }
        }
    }

    return 0;
}