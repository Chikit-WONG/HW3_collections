#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<ctime>
#include<algorithm>

using namespace std;

class Person
{
    friend void printVector(const vector<Person> &v);
    friend void setScore(vector<Person> &v);
public:
    Person(string name,int score):m_Name(name),m_Score(score){}
private:
    string m_Name;
    int m_Score;
};

void printVector(const vector<Person> &v)
{
    for(vector<Person>::const_iterator it=v.cbegin();it!=v.cend();it++)
    {
        cout<<"姓名："<<it->m_Name<<" 分数: "<<it->m_Score<<endl;
    }
}

void setScore(vector<Person> &v)
{
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        deque<int> d;
        for(int i=0;i<10;i++)
        {
            int num=rand()%41+60;
            d.push_back(num);
        }

        //测试
        for(deque<int>::iterator dit=d.begin();dit!=d.end();dit++)
        {
            cout<<*dit<<" ";
        }
        cout<<endl;

        sort(d.begin(),d.end());

        d.pop_front();
        d.pop_back();

        int sum=0;
        for(deque<int>::iterator dit=d.begin();dit!=d.end();dit++)
        {
            sum+=*dit;
        }

        (*it).m_Score=sum/d.size();
    }
}

void setPerson(vector<Person> &v)
{
    string nameSeed="ABCDE";
    for(int i=0;i<5;i++)
    {
        string name="选手";
        name+=nameSeed[i];

        int score=0;
        
        v.push_back(Person (name,score));
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    vector<Person> v;
    setPerson(v);
    // printVector(v);
    setScore(v);
    printVector(v);
    return 0;
}