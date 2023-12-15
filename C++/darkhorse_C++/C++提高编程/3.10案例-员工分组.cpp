#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<ctime>

#define CHEHUA 0
#define MEISHU 1
#define YANFA 2

using namespace std;

class Worker
{
public:
    string m_Name;
    int m_Salary;
};

void printWorker(multimap<int,Worker> &mWorker)
{
    for(map<int,Worker>::iterator it=mWorker.begin();it!=mWorker.end();++it)
    {
        cout<<"部门："<<it->first<<" 姓名："<<it->second.m_Name<<" 工资："<<it->second.m_Salary<<endl;
    }
    cout<<endl;
}

void createWorker(vector<Worker> &vWorker)
{
    string nameSeed="ABCDEFGHIJ";
    for(unsigned int i=0;i<10;++i)
    {
        Worker worker;
        worker.m_Name="员工";
        worker.m_Name+=nameSeed[i];
        worker.m_Salary=rand()%10001+10000;

        vWorker.push_back(worker);
    }
}

void setGroup(multimap<int,Worker> &mWorker,vector<Worker> &vWorker)
{
    for(vector<Worker>::iterator it=vWorker.begin();it!=vWorker.end();++it)
    {
        int depId=rand()%3;

        mWorker.insert(make_pair(depId,*it));
    }
}

void showWorkerByGroup(multimap<int,Worker> &mWorker)
{
    cout<<"策划部门："<<endl;
    size_t count=mWorker.count(CHEHUA);
    multimap<int,Worker>::iterator pos=mWorker.find(CHEHUA);

    for(size_t k=0;k<count;++k,++pos)
    {
        cout<<"姓名："<<pos->second.m_Name<<" 工资："<<pos->second.m_Salary<<endl;
    }

    cout<<"------------"<<endl;
    cout<<"美术部门："<<endl;

    count=mWorker.count(MEISHU);
    for(size_t k=0;k<count;k++,pos++)
    {
        cout<<"姓名："<<pos->second.m_Name<<" 工资："<<pos->second.m_Salary<<endl;
    }

    cout<<"------------"<<endl;
    cout<<"研发部门："<<endl;

    count=mWorker.count(YANFA);

    for(size_t k=0;k<count;++k,++pos)
    {
    cout<<"姓名："<<pos->second.m_Name<<" 工资："<<pos->second.m_Salary<<endl;
    }

}

int main()
{
    srand((unsigned int)time(NULL));

    vector<Worker> vWorker;
    createWorker(vWorker);

    //cout<<vWorker.size()<<endl;

    multimap<int,Worker> mWorker;
    setGroup(mWorker,vWorker);

    //cout<<mWorker.size()<<endl;

    //测试
    //printWorker(mWorker);

    showWorkerByGroup(mWorker);

    return 0;
}