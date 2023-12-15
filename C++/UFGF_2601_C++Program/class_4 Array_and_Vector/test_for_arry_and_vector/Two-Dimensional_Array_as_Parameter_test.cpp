#include<iostream>
using namespace std;

void print(const double table[][10], int rows)
{
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < 10; j++) // Try j < 11
cout << table[i][j] << '\t';
cout << "\n";
}
}

int main()
{
    double a[2][10]={
        {1,2,3,4,5,6,7,8,9,10},
        {11,12,13,14,15,16,17,18,19,20}
    };
    print(a,2);
    return 0;
}