#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n<<endl;
    char nextChar = cin.peek();
    cout<<nextChar<<endl;
    cin.get();
    nextChar = cin.peek();
    cout<<nextChar<<endl;
    // char ch;
    // cin.get(ch);
    // cout<<ch<<endl;
    // cin.get(ch);
    // cout<<ch<<endl;
    // cin.get(ch);
    // cout<<ch<<endl;
    return 0;
}