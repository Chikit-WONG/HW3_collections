#include <iostream>
#include <vector>
using namespace std;

vector<int> duplicates(vector<int> v)
{
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])
            {
                for(int k=j;k<v.size()-1;k++)
                {
                    v[k]=v[k+1];
                }
                v.pop_back();
                --j;
            }
        }
    }
    
    return v;
}

vector<int> sort(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    return v;
}

int main()
{
    int sizeA, sizeB, a, b;
    cin >> sizeA >> sizeB;
    vector<int> A;
    vector<int> B;
    vector<int> Union;
    vector<int> Intersection;
    Union.push_back(1);
    cout << Union[0] << endl;
    for (int i = 0; i < sizeA; i++)
    {
        cin >> a;
        A.push_back(a);
        Union.push_back(a);
    }

    //    for(int i=0;i<A.size();i++)
    //    {
    //     cout<<"A:"<<A[i]<<" ";
    //    }
    //    cout<<endl;

    for (int i = 0; i < sizeB; i++)
    {
        cin >> b;
        B.push_back(b);
        Union.push_back(b);
    }

    Union=duplicates(Union);

    //     cout<<"The size of B is:"<<B.size()<<endl;

    //     for(int i=0;i<B.size();i++)
    //    {
    //     cout<<"B:"<<B[i]<<" ";
    //    }
    //    cout<<endl;

    // for (int i = 0; i < sizeA; i++)
    // {
    //     for (int j = 0; j < sizeB; j++)
    //     {
    //         if (Union[i] != B[j])
    //         {
    //             Union.push_back(B[j]);
    //             cout << Union[i] << " ";
    //         }
    //     }
    // }

    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (A[i] == B[j])
            {
                Intersection.push_back(B[j]);
            }
        }
    }

    // Union.push_back(1);
    // cout<<Union[0]<<endl;

    //     for(int i=0;i<Union.size();i++)
    //    {
    //     cout<<Union[i]<<" ";
    //    }
    //    cout<<endl;
    //    for(int i=0;i<Intersection.size();i++)
    //    {
    //     cout<<Intersection[i]<<" ";
    //    }

    Union = sort(Union);
    Intersection = sort(Intersection);

    for (int i = 0; i < Union.size(); i++)
    {
        cout << Union[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < Intersection.size(); i++)
    {
        cout << Intersection[i] << " ";
    }

    return 0;
}