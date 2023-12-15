#include<iostream>
#include<fstream>
using namespace std;

class Myclass
{
public:
    Myclass(int data):m_data(data){};
    void print(ostream &os)
    {
        os<<"Myclass data:"<<m_data<<endl;
    }
private:
    int m_data;
};

int main()
{
    Myclass obj(42);
    ofstream ofs("output.txt",ios::out);
    obj.print(cout);
    obj.print(ofs);
    ofs.close();
    return 0;
}