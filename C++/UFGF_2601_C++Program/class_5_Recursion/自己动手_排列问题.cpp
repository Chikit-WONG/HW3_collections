#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> permutat(const vector<int> &v)
{
    vector<vector<int>> answer;
    if(v.size()==1)
    {
        answer.push_back(v);
        return answer;
    }

    for(int i=0;i<v.size();i++)
    {
        vector<int> v2=v;
        int x=v2[i];
        v2.erase(v2.begin()+i);
        vector<vector<int>> smaller;
        smaller=permutat(v2);
        for(int k=0;k<smaller.size();k++)
        {
            smaller[k].push_back(x);
            answer.push_back(smaller[k]);

        }

    }
    return answer;
}

int main()
{
   vector<int> my_vector{1,2,4};
    vector<vector<int>> v=permutat(my_vector);

    for(const vector<int> row:v)
    {
        for(const int elem:row)
        {
            cout<<elem<<" ";
        }
        cout<<endl;
    }
    return 0;
}