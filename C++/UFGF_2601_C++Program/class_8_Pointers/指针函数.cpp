// #include<iostream>
// using namespace std;

// int sum(const int &a,const int &b)
// {
//     return a+b;
// }

// int main()
// {
//     int(*compute)(const int &,const int &);
//     compute=sum;
//     cout<<compute(10,20);
//     return 0;
    
// }


#include<iostream>
using namespace std;
int compute(int a,int b,int(*dowork)(const int& ,const int& ))
{
    return dowork(a,b);
}

int sum(const int &a,const int &b)
{
    return a+b;
}


int main()
{
   
    cout<<compute(50,20,sum);
    return 0;
}


