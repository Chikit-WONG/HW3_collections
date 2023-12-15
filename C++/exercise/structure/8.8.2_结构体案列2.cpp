#include <iostream>
#include <string>
using namespace std;
struct hero
{
    string name;
    int age;
    string sex;
};
void bubbleSort(hero arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)

        {
            if (arr[j].age > arr[j + 1].age)
            {
                hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print(hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].sex << endl;
    }
}
int main()
{
    hero arr[] =
    {
        {"����", 23, "��"},
        {"����", 22, "��"},
        {"�ŷ�", 20, "��"},
        {"����", 21, "��"},
        {"����", 19, "Ů"},
    };
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"before change:"<<endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].sex << endl;
    }
    cout<<"after change:"<<endl;
    bubbleSort(arr,len);
    print(arr,len);
    return 0;

}