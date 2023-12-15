#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    vector<double> v;
    for(int i=0;i<10;i++)
    {
        // srand((unsigned int)time(NULL));
        int num=rand()%100+1;
        v.push_back(num);
        cout<<v[i]<<endl;

    };
    return 0;
}