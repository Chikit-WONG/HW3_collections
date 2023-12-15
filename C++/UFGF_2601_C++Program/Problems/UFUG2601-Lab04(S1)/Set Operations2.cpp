#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> duplicates(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                for (int k = j; k < v.size() - 1; k++)
                {
                    v[k] = v[k + 1];
                }
                v.pop_back();
                --j;
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
    if (sizeA != 0)
    {
        for (int i = 0; i < sizeA; i++)
        {
            cin >> a;
            A.push_back(a);
            Union.push_back(a);
        }
    }

    if (sizeB != 0)
    {
        for (int i = 0; i < sizeB; i++)
        {
            cin >> b;
            B.push_back(b);
            Union.push_back(b);
        }
    }

    if (Union.size() == 0)
    {
        cout << "None" << endl;
    }
    else
    {
        Union = duplicates(Union);

        sort(Union.begin(),Union.end());
       

        for (int i = 0; i < Union.size(); i++)
        {
            cout << Union[i] << " ";
        }
        cout << endl;
    }


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
    
    if (Intersection.size() == 0)
    {
        cout << "None" << endl;
    }

    else
    {
        

        sort(Intersection.begin(),Intersection.end());

        for (int i = 0; i < Intersection.size(); i++)
        {
            cout << Intersection[i] << " ";
        }
    }

    return 0;
}