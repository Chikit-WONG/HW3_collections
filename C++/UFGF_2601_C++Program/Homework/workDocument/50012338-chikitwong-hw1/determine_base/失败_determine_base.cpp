#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
bool isBaseValid(string p,string q,string r,int B)
{
    int result_p=0;
    int result_q=0;
    int result_r=0;
    for(int i=0;i<p.length();i++)
    {
         if(p[i]>=(B+48))
            return false;
    }

    for(int i=0;i<q.length();i++)
    {
         if(q[i]>=(B+48))
            return false;
    }

    for(int i=0;i<r.length();i++)
    {
         if(r[i]>=(B+48))
            return false;
    }






        // if(65<=p[i]&&p[i]<=70)
        // {
        //     if(p[i]>=(B+55))
        //     return false;
        // }

        // else if(48<=p[i]&&p[i]<=57)
        // {
           
        // }
    

    // for(int i=0;i<q.length();i++)
    // {
    //     if(65<=q[i]&&q[i]<=70)
    //     {
    //         if(q[i]>=(B+55))
    //         return false;
    //     }

    //     else if(48<=q[i]&&q[i]<=57)
    //     {
    //         if(q[i]>=(B+48))
    //         return false;
    //     }
    // }

    // for(int i=0;i<r.length();i++)
    // {
    //     if(65<r[i]&&r[i]<=70)
    //     {
    //         if(r[i]>=(B+55))
    //         return false;
    //     }

    //     else if(48<=r[i]&&r[i]<=57)
    //     {
    //         if(r[i]>=(B+48))
    //         return false;
    //     }
    // }








    for(int i=0;i<p.length();i++)
    {
        result_p+=(p[i]-48)*pow(B,i);
        // // if(p[i]=='A'||p[i]=='B'||p[i]=='C'||p[i]=='D'||p[i]=='E'||p[i]=='F')
        // if(65<=p[i]&&p[i]<70)
        // {
        //     result_p+=(p[i]-55)*pow(B,i);
        // }
        // else if(48<=p[i]&&p[i]<=57)
        // {
            
        // }

    }

     for(int i=0;i<q.length();i++)
    {
        result_q+=(q[i]-48)*pow(B,i);
        // if(65<=q[i]&&q[i]<70)
        // {
        //     result_q+=(q[i]-55)*pow(B,i);
        // }
        //  else if(48<=q[i]&&q[i]<=57)
        // {
        //     result_q+=(q[i]-48)*pow(B,i);
        // }

    }

     for(int i=0;i<r.length();i++)
    {
        result_r+=(r[i]-48)*pow(B,i);
    //    if(65<=r[i]&&r[i]<70)
    //     {
    //         result_r+=(r[i]-55)*pow(B,i);
    //     }
    //      else if(48<=r[i]&&r[i]<=57)
    //     {
            
    //     }

    }
    return result_p*result_q==result_r;
}

int findSmallestBase(string p,string q, string r)
{
    for(int B=2;B<=16;B++)
    {
        if(isBaseValid(p,q,r,B))
        {
            return B;
        }
    }

    return 0;
}


int main()
{
    string p,q,r;
    cin>>p>>q>>r;
    int B=findSmallestBase(p,q,r);
    cout<<B<<endl;
    return 0;
    
}


// vector<char> vp;
    // vector<char> vq;
    // vector<char> vr;
    // string p,q,r;
    // cin>>p>>q>>r;
    
    // for(int i=0;i<p.length();i++)
    // {
    //     vp.push_back(p[i]);
    // }