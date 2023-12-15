#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (unsigned int i = 0; i < n; i++)
    {
        vector<unsigned int> v2;
        getline(cin, v[i]);
        v[i][0] = toupper(v[i][0]);
        for (size_t j = 1; j < v[i].length(); j++)
        {
            if ((v[i][j] == '.' || v[i][j] == '!' || v[i][j] == '?') && j != v[i].length())
            {
                size_t k = j + 2;
                
                v[i][k] = toupper(v[i][k]);
                v2.push_back(k);
            }
            else if (isalpha(v[i][j]))
            {
                bool flag = true;
                for (size_t k = 0; k < v2.size(); k++)
                {
                    if (j == v2[k])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    v[i][j] = tolower(v[i][j]);
                }
            }
        }
        cout << v[i] << endl;
    }
    return 0;
}