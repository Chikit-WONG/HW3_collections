#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    unsigned int n;
    cout<<"Please enter the filename that you want to output:";
    string filenameout;
    cin>>filenameout;
    cout<<endl; 
    fstream clean(filenameout.c_str(), ios::trunc);
clean.close(); // ��ǰ�ر��ļ���

// ����ӳ�
clean.clear(); // ����ļ����Ĵ���״̬
clean.open(filenameout.c_str(),  ios::out|ios::trunc); // ���´��ļ���
clean.close(); // �ر��ļ�������ɽضϲ���


    fstream ofs(filenameout.c_str(),ios::app);
    cout<<"Please enter how many files do you want to concatenate:";
    cin>>n;
    for(unsigned int i=0;i<n;i++)
    {
        string filename;
        cout<<"Please enter a filename:";
        cin>>filename;
        ifstream ifs(filename.c_str(),ios::in);
        if(!ifs.is_open())
        {
            cerr<<"Error!"<<endl;
        }
        string line;
        while(getline(ifs,line))
        {
            ofs<<line<<"\n";
        }
        ifs.close();

    }
    ofs.close();
    fstream fileoutput(filenameout.c_str(),ios::in);
    cout<<"The content of the output file:"<<endl;
    string line2;
    while(getline(fileoutput,line2))
    {
        cout<<line2<<endl;
    }
    fileoutput.close();
//ofstream ofs("testoutput.txt",ios::trunc);
    //ofs.close();
    return 0;
}