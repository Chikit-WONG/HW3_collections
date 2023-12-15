#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Person
{
public:
    Person(string s, unsigned a, float b, float c) : m_name(s), m_age(a), m_weight(b), m_height(c){};

    string m_name;
    unsigned m_age;
    float m_weight;
    float m_height;
};

vector<string> names;
int main()
{
    int N, M;
    cin >> N >> M;
    string name;
    unsigned age;
    float weight, height;
    vector<Person> roster;
    for (int i = 0; i < N; ++i)
    {
        cin >> name >> age >> weight >> height;
        Person p(name, age, weight, height);
        roster.push_back(p);
    }
    for (int i = 0; i < M; ++i)
    {
        string s;
        cin >> s;
        names.push_back(s);
    }
    for (int i = 0; i < M; ++i)
    {
        string s = names[i];
        for (size_t j = 0; j < roster.size(); ++j)
        {
            if (roster[j].m_name == s)
            {
                cout << fixed << setprecision(1) << roster[j].m_age << " " << roster[j].m_weight << " " << roster[j].m_height;
                cout << endl;
                break;
            }
            else
            {
                if (j == roster.size() - 1)
                    cout << "404 Not Found" << endl;
            }
        }
    }
    return 0;
}
