#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include<fstream>
#include<cctype>
using namespace std;
int main()
{
    string filename1;
    cout<<"Enter the file name to input:";
    cin>>filename1;
    ifstream ifs;
    ifs.open(filename1,ios::in);
    string filename2;
    cout<<"Enter the file name to output:";
    cin>>filename2;
    ofstream ofs;
    ofs.open(filename2,ios::out);
    string buf;
    while(getline(ifs,buf))
    {
        vector<unsigned int> v2;
        buf[0] = toupper(buf[0]);
        for (size_t j = 1; j < buf.length(); j++)
        {
            if ((buf[j] == '.' || buf[j] == '!' || buf[j] == '?') && j != buf.length())
            {
                size_t k = j + 2;
                
                buf[k] = toupper(buf[k]);
                v2.push_back(k);
            }
            else if (isalpha(buf[j]))
            {
                bool flag = true;
                for (size_t k = 0; k < v2.size(); k++)
                {
                    if (j == v2[k])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    buf[j] = tolower(buf[j]);
                }
            }
        }
        ofs<<buf<<endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}