#include<iostream>
using namespace std;
int main()
{   
    int currVal=0,val=0,cnt=1;
    if(cin>>val)
    {
       while(cin>>val)
       {
        if(val==currVal)
        {
              ++cnt;
        }
        else{
            
            cout<<currVal<<"occurs"<<cnt<<"times"<<endl;
            currVal=val;
            cnt=1;
        }
       }
    }
    else{
             cout<<currVal<<"occurs"<<cnt<<"times"<<endl;

    }
    return 0;
}
