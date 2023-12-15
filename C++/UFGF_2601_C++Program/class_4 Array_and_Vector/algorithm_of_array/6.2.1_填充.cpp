#include<iostream>
using namespace std;
int main()
{
    const int CAPACITY=10;
    int current_size=0;
    int values[CAPACITY];

    for(int i=0;i<sizeof(values)/sizeof(values[0]);i++)
    {
        values[i]=i*i;
        cout<<values[i]<<endl;
    }
    return 0;
}