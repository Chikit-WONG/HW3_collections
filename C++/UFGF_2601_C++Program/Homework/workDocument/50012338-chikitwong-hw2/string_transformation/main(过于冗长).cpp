#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    unsigned int p1, p2, p3;
    string inputString;
    cin >> p1 >> p2 >> p3;
    cin >> inputString;
    vector<char> outputString;
    outputString.push_back(inputString[0]);
    for (size_t i = 1; i < inputString.length() - 1; i++)
    {
        unsigned int a, b;
        a = inputString[i - 1];
        b = inputString[i + 1];
        bool judge = false;
        // if ((isdigit(inputString[i - 1]) || islower(inputString[i - 1])) && (isdigit(inputString[i + 1]) || islower(inputString[i + 1])) && a < b && inputString[i] == '-')
        if((isdigit(inputString[i-1])&&isdigit(inputString[i+1])||(islower(inputString[i-1])&&islower(inputString[i+1])))&& a < b && inputString[i] == '-')
        {
            judge = true;
        }

        if (b == a + 1 && judge)
        {
            continue;
        }

        if (judge)
        {
            if (isdigit(inputString[i - 1])&&isdigit(inputString[i + 1]))
            {
                if(p1==3)
                {
                    for (unsigned int j = a + 1; j <= b - 1; j++)
                    {

                        for (unsigned int k = 0; k < p2; k++)
                        {
                            outputString.push_back('*');
                        }
                    }
                    continue;
                }
                if (p3 == 1)
                    {
                        for (unsigned int j = a + 1; j <= b - 1; j++)
                        {
                            for (unsigned int k = 0; k < p2; k++)
                            {
                                outputString.push_back(j);
                            }
                        }
                    }
                else if (p3 == 2)
                    {
                        for (unsigned int j = b-1; j >=a+1; j--)
                        {
                            for (unsigned int k = 0; k < p2; k++)
                            {
                                outputString.push_back(j);
                            }
                        }
                    }
            }
            else if (islower(inputString[i - 1])&&islower(inputString[i + 1]))
            {
                switch (p1)
                {
                case 1:
                {
                    if (p3 == 1)
                    {
                        for (unsigned int j = a + 1; j <= b - 1; j++)
                        {
                            char c;
                            c = j;
                            for (unsigned int k = 0; k < p2; k++)
                            {
                                outputString.push_back(c);
                            }
                        }
                    }
                    else if (p3 == 2)
                    {
                        for (unsigned int j = b - 1; j >= a + 1; j--)
                        {
                            char c;
                            c = j;
                            for (unsigned int k = 0; k < p2; k++)
                            {
                                outputString.push_back(c);
                            }
                        }
                    }

                    break;
                }
                case 2:
                {
                    if (p3 == 1)
                    {
                        for (unsigned int j = a + 1 - 32; j <= b - 1 - 32; j++)
                        {
                            char c;
                            c = j;
                            for (unsigned int k = 0; k < p2; k++)
                            {
                                outputString.push_back(c);
                            }
                        }
                    }
                    else if (p3 == 2)
                    {
                        for (unsigned int j = b - 1 - 32; j >= a + 1 - 32; j--)
                        {
                            char c;
                            c = j;
                            for (unsigned int k = 0; k < p2; k++)
                            {
                                outputString.push_back(c);
                            }
                        }
                    }

                    break;
                }
                case 3:
                {
                    for (unsigned int j = a + 1; j <= b - 1; j++)
                    {

                        for (unsigned int k = 0; k < p2; k++)
                        {
                            outputString.push_back('*');
                        }
                    }
                    break;
                }
                }
            }

            continue;
        }
        outputString.push_back(inputString[i]);
    }
    outputString.push_back(inputString[inputString.length() - 1]);
    for (size_t i = 0; i < outputString.size(); i++)
    {
        cout << outputString[i];
    }
    return 0;
}