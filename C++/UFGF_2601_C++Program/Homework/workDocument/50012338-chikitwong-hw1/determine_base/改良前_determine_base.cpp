#include<iostream>
#include<cmath>
using namespace std;
bool isBasedValid(int p, int q,int r,int base)
{
    
    int a=0;
    int b=0;
    int result_p=0;
    int result_q=0;
    int result_r=0;
    int power_p=0;
    int power_q=0;
    int power_r=0;

    while(p>0)
    {
        int remainder=p%10;
        if(remainder>=base)
        {
            return false;
        }
        result_p+=remainder*pow(base,power_p);
        p/=10;
        power_p++;
    }

    while(q>0)
    {
        int remainder=q%10;
        if(remainder>=base)
        {
            return false;
        }
        result_q+=remainder*pow(base,power_q);
        q/=10;
        power_q++;
    }

     while(r>0)
    {
        int remainder=r%10;
        if(remainder>=base)
        {
            return false;
        }
        result_r+=remainder*pow(base,power_r);
        r/=10;
        power_r++;
    }

    return result_p*result_q==result_r;
}

int findSmallestBase(int p,int q, int r)
{
    for(int base=2;base<=16;base++)
    {
        if(isBasedValid(p,q,r,base))
        {
            return base;
        }
    }

    return 0;
}

int main()
{
    int p,q,r;
    cin>>p>>q>>r;
    int base=findSmallestBase(p,q,r);
    cout<<base<<endl;
    return 0;
}

// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isBasedValid(int p, int q, int r, int base)
// {
//     int result_p = 0;
//     int result_q = 0;
//     int result_r = 0;
//     int power_p = 0;
//     int power_q = 0;
//     int power_r = 0;

//     while (p > 0)
//     {
//         int remainder = p % 10;
//         result_p += remainder * pow(base, power_p);
//         p /= 10;
//         power_p++;
//     }

//     while (q > 0)
//     {
//         int remainder = q % 10;
//         result_q += remainder * pow(base, power_q);
//         q /= 10;
//         power_q++;
//     }

//     while (r > 0)
//     {
//         int remainder = r % 10;
//         result_r += remainder * pow(base, power_r);
//         r /= 10;
//         power_r++;
//     }

//     return result_p * result_q == result_r;
// }

// int findSmallestBase(int p, int q, int r)
// {
//     for (int base = 2; base <= 16; base++)
//     {
//         if (isBasedValid(p, q, r, base))
//         {
//             return base;
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int p, q, r;
//     cin >> p >> q >> r;
//     int base = findSmallestBase(p, q, r);
//     cout << base << endl;
//     return 0;
// }