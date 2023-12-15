#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,k,a,b;
    cin>>n>>m>>k;
    char color;
    char direction;

    vector<vector<char>> v(n,vector<char>(m));
    
    for(int num1=0;num1<n;num1++)
        {
            for(int num2=0;num2<m;num2++)
            {
                v[num1][num2]='.';
            }
        }
    
    for(int i=0;i<k;i++)
    {
        
        cin>>a>>b>>color>>direction;
        // if(direction=='R')
        // {
        //     for(int j=b;j<=m;j++)
        //     {
        //         v[a-1][j-1]=color;
        //     }
        // }

        // if(direction=='L')
        // {
        //     for(int j=b;j>=1;j--)
        //     {
        //         v[a-1][j-1]=color;
        //     }
        // }

        if(direction=='D')
        {
            for(int j=a;j<=n;j++)
            {
                v[j-1][b-1]=color;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
