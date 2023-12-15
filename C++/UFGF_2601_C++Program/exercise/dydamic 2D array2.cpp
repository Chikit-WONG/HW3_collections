#include <iostream>
using namespace std;
int main()
{
    int height, width;
    cin >> height >> width;
    int arr[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
