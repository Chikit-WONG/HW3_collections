#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
class item
{
    public:
        void set()
        {
            cin>>name>>age>>weight>>height;
        }
        void getInformation()
        {
            cout<<age<<" "<<fixed<<setprecision(1)<<weight<<" "<<fixed<<setprecision(1)<<height<<endl;
        }
        
        string getName()
        {   
            return name;
        }

    private:
        string name;
        int age;
        double weight;
        double height;
};

int main()
{
    int N,M;
    cin>>N>>M;
    vector<item> roster(N);
    for(int i=0;i<N;i++)
    {
        roster[i].set();
    }
    for(int i=0;i<M;i++)
    {
        string nameCheck;
        int count=0;
        cin>>nameCheck;
        for(int j=0;j<N;j++)
        {
            
            if(nameCheck==roster[j].getName())
            {
                roster[j].getInformation();
                break;
            }
            else
            {
                count+=1;
            }
            if(count==N)
            {
                cout<<"404 Not Found"<<endl;
            }
        }

    }
    return 0;

}