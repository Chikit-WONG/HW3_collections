#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=2;i<3000;i++)
    {
        for(int j=2;j<3000;j++)
        {
            if(j%i==0)
            {
                break;
            }
        }
    }
}