#include<iostream>
#include<string>
using namespace std;
int main()
{
    int month;
    cout<<"What month is now?"<<endl;
    cin>>month;
    string semster=(month>=9)?"Fall":
                   (month<=5)?"Spring":"Not spring";
    cout<<semster<<endl;
    system("pause");
    return 0;

}