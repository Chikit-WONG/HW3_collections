#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<float> v1;
    vector<float> v2;
    vector<float> v3;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                int sum=i*pow(10,2)+j*pow(10,1)+k*pow(10,0);
                v1.push_back(sum);
            }
        }
    }
     for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                int sum=i*pow(10,2)+j*pow(10,1)+k*pow(10,0);
                v2.push_back(sum);
            }
        }
    }

    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                int sum=i*pow(10,2)+j*pow(10,1)+k*pow(10,0);
                v3.push_back(sum);
            }
        }
    }

    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            for(int k=0;k<v3.size();k++)
            {
                // if(v1[i]/v2[j]==(1.0/2)&&v1[i]/v3[k]==(1.0/3)&&v2[j]/v3[k]==(2.0/3))
                // {
                //     cout<<v1[i]<<" "<<v2[j]<<" "<<v3[k]<<endl;
                // }
                cout<<v1[i]<<" "<<v2[j]<<" "<<v3[k]<<endl;
            }
        }
    }
}