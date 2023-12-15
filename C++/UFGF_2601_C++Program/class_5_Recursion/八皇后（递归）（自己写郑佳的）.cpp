#include<iostream>
#include<vector>
using namespace std;

int count=0;


void print(const int &N,vector<int> &queens)
{
    for(int i=0;i<N;i++)
    {
        cout<<char('a'+queens[i])<<i+1<<" ";
    }
    cout<<endl;
}

bool is_valid(int row,int col,vector<int> &queens)
{
    for(int i=0;i<row;i++)
    {
        if(queens[i]==col||queens[i]-i==col-row||queens[i]+i==col+row)
        {
            return false;
        }
    }
    return true;
}

void solve(int  row,const int &N,vector<int> &queens)
{
    if(row==N)
    {
        print(N,queens);
        count+=1;
        return;
    }

    for(int col=0;col<N;col++)
    {
        if(is_valid(row,col,queens))
        {
            queens[row]=col;
            solve(row+1,N,queens);
        }
    }
}

int main()
{
    int N;
    cout<<"Please enter a number:";
    cin>>N;
    vector<int> queens(N);
    solve(0,N,queens);
    cout<<"There are "<<count<<" solutions"<<endl;
    return 0;
}