#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, a;
    int max1=0,max2=0;
    cin >> n;
    if(n>(pow(2,20)))
    {
        cout<<"The numbers of the set were put to many!"<<endl;
        return 0;
    }
    if (cin.fail())
    {
        cout << "The input is not valid." << endl;
    }
    else
    {
        if (0 <= n && n <= 2e31 - 1)
        {
            cin>>a;
            max1=a;
            for(int i=1;i<n;i++)
            {
                cin>>a;
                if(max1<a)
                {
                    max2=max1;
                    max1=a;
                    
                }

                else if(max2<a&&a<max1)
                {
                    max2=a;
                }
            }
            cout<<max2<<endl;
            
           
        }
        else
        {
            cout << "The number of the input is out of size!" << endl;
        }
    }

    return 0;
}