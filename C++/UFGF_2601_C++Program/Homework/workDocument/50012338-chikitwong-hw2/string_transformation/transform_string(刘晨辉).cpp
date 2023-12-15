#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<int> place;
vector<string> split (const string s)
{
    vector<string> res ;
    for(int i = 0; i < s.length(); i++)
    {
        string ch (1 , s[i]);
        if(ch == "-") place.push_back(i);
        res.push_back(ch); 
    }
    return res;
}
void transform1(vector<string>& v)
{
    for(int i = 0; i < place.size(); i++)
    {
        int j = place[i];
        int before = static_cast<int>(v[j - 1][0]);
        int after = static_cast<int>(v[j + 1][0]);
        if(before >= 97 && before <= 122 && after >= 97 && after <= 122 )
        {
            if(before < after - 1)
            {
                v[j].clear();
                for(int k = before + 1; k < after; k++)
                {
                    v[j].push_back(static_cast<char>(k));
                }
            }
            else if(before == after - 1)
            {
                v[j] = "";
            }
        }
        else if(before >= 48 && before <= 57 && after >= 48 && after <= 57 )
        {
             if(before < after - 1)
            {
                v[j].clear();
                for(int k = before + 1; k < after; k++)
                {
                    v[j].push_back(static_cast<char>(k));
                }
            }
            else if(before == after - 1)
            {
                v[j] = "";
            }
        }
        else continue;
    }
}

void transform2(vector<string>& v, int p1, int p3) 
{
    if(p1 == 2)
    {
        for(int i = 0; i < place.size(); i++)
        {
            int j = place[i];
            if(v[j] != "" && v[j] != "-")
            {
                for(int k = 0; k < v[j].size(); k++)
                {
                    v[j][k] -= 32;
                }
            }
        }
    }
    else if(p1 == 3)
    {
        for(int i = 0; i < place.size(); i++)
        {
            int j = place[i];
            if(!v[j].empty()) 
            {
                for(int k = 0; k < v[j].size(); k++)
                {
                    v[j][k] = '*';
                }
            }
        }
    }

    if(p3 == 2)
    {
         for(int i = 0; i < place.size(); i++)
        {
            int j = place[i];
            reverse(v[j].begin(), v[j].end());
        }
    }

}

void print(vector<string>& v, int p2)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(find(place.begin(), place.end(), i) != place.end())
        {
            for(int k = 0; k < v[i].length(); k++)
            {
                if(v[i][k] == '-') 
                {
                    cout << v[i][k];
                } 
                else
                {
                    for(int j = 0; j < p2; j++)
                    {
                        cout << v[i][k];
                    }
                }
            }
        }
        else
        {
            cout << v[i];
        }
    }
    cout << endl;
}
int main()
{
    int p1, p2, p3;
    string question_str;
    cin >> p1 >> p2 >> p3 >> question_str;
    vector<string> splited_str = split(question_str);
    transform1(splited_str);
    transform2(splited_str, p1, p3);
    print(splited_str, p2);
    return 0;
}