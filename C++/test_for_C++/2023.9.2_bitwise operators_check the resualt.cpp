#include<iostream>
#include<bitset>
using namespace std;
int main()
{   
    int b=~'a'<<3;
    cout<<b<<endl;

    int c=~1;
    cout<<c<<endl;

    int a = -5;
std::cout << "a = " << std::bitset<8>(a) << std::endl;

    system("pause");
    return 0;
}