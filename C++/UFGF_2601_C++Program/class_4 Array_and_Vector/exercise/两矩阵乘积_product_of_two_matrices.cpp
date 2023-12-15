#include <iostream>
#include <vector>
using namespace std;
vector<vector<double>> product(const vector<vector<double>> &left, const vector<vector<double>> &right)
{
    vector<vector<double>> product;
    if (left[0].size() == right.size())
    {
        for (int i = 0; i < left.size(); i++)
        {
            vector<double> row;
            for (int j = 0; j < right[0].size(); j++)
            {
                double sum = 0;
                for (int k = 0; k < left[0].size(); k++)
                {
                    sum += left[i][k] * right[k][j];
                }
                row.push_back(sum);
            }
            product.push_back(row);
        }
    }
    else
    {
        cout<<"The matrices you input cannot multiply."<<endl;
    }
    return product;
}

int main()
{
    int n1, m1, n2, m2;
    cout << "Please enter the number of rows for the first matrix:";
    cin >> n1;
    cout << "Please enter the number of columns for the first matrix:";
    cin >> m1;
    cout << "Please enter the number of rows for the second matrix:";
    cin >> n2;
    cout << "Please enter the number of cokumns for the second matrix:";
    cin >> m2;
    vector<vector<double>> num1(n1, vector<double>(m1));
    vector<vector<double>> num2(n2, vector<double>(m2));
    vector<vector<double>> result;
    cout<<"Please enter some numbers in the first matrix:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> num1[i][j];
        }
    }
    cout<<"Please enter some numbers in the second matrix:"<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> num2[i][j];
        }
    }
    result = product(num1, num2);
    for (const auto &row : result)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}