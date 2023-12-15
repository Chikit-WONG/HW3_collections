#include<iostream>
#include<vector>
using namespace std;

bool canReachDestination(vector<vector<char>> &map,int x,int y)
{
    if(x<0||x>=map.size()||y<0||y>=map[0].size()||map[x][y]=='w')
    {
        return false;
    }

    if(map[x][y]=='o')
    {
        return true;
    }

    if(canReachDestination(map,x+1,y)||canReachDestination(map,x,y+1))
    {
        map[x][y]='w';
        return true;
    }

    return false;
}

int main()
{
    int a,b,Startx,Starty;
    cin>>a>>b;
    bool flag=0;
    vector<vector<char>> map(a,vector<char>(b));
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>map[i][j];
            if(map[i][j]=='o' &&flag==0)
            {
                Startx=i;
                Starty=j;
                flag=1;
            }
        }
    }

    map[Startx][Starty]='v';

    bool result=canReachDestination(map,Startx,Starty);

    cout<<(result?"True":"False")<<endl;
    // if(result)
    // {
    //     cout<<"True"<<endl;

    // }
    // else{
    //     cout<<"False"<<endl;
    // }

    return 0;

}