#include<iostream>
#include<vector>
using namespace std;
void matrix(const vector<vector<double>> &v)
{
    for(const auto &row:v)
    {
        for(const auto &elem:row)
        {
            cout<<elem<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    
    int n,m;
    cin>>n>>m;
    
    vector<vector<double>> a(n,vector<double>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    matrix(a);
    return 0;
}