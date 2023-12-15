#include<iostream>
#include<vector>
using namespace std;

int N;
int count=0;
vector<int> queens_col;
vector<vector<char>> queens;

void prepare()
{
    cout<<"Please enter a number:";
    cin>>N;
    queens_col.resize(N,-1);
    queens.resize(N);
    for(vector<char> &row:queens)
    {
        row.resize(N,'.');
    }

    
}

bool is_valid(int &row,int &col)
{
    for(int i=0;i<row;i++)
    {
        if(queens_col[i]==col||queens_col[i]-i==col-row||queens_col[i]+i==col+row)
        {
            return false;
        }
    }
    return true;
}

void print()
{
    for(const vector<char> &row:queens)
    {
        for(const char elem:row)
        {
            cout<<elem;
        }
        cout<<endl;
    }
}

void solve(int row)
{
    if(row==N)
    {
        print();
        cout<<endl;
        count+=1;
        return;
    }

    for(int col=0;col<N;col++)
    {
        if(is_valid(row,col))
        {
            queens_col[row]=col;
            queens[row][col]='Q';
            solve(row+1);
            queens[row][col]='.';
            queens_col[row]=-1;
        }
    }
}

int main()
{
    prepare();
    solve(0);
    cout<<"There are "<<count<<" solution."<<endl;
    return 0;
}