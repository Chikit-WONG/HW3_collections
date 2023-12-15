#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int higest=0;
    vector<int> salary={32000,54000,67500,29000,35000,80000,115000,44500,100000,65000};
    cout<<salary.size()<<endl;
    for(int i=0;i<salary.size();i++)
    {   
        
        if(higest<salary[i])
        {
            higest=salary[i];
            cout<<higest<<endl;
        }
    }
    cout<<"The highest salary is"<<higest<<endl;
    return 0;
}