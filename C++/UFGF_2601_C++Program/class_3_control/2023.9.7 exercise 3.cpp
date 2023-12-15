#include<iostream>
using namespace std;
int main()

{
    int x = 100, y = 100;
if (x && y > 0)
{
    cout<<"true"<<endl;
}
else
{
    cout<<"false"<<endl;

}
int a = 0, b = 1, c = 1;
if (++a || b++ || c--) {
++b;
cout<<"true"<<endl;
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
}
 a = 0, b = 1, c = 1;
if (a++ && (c = b + a)) {
++b;
cout<<"true"<<endl;

cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
}
else
{
    cout<<"false"<<endl;
}
system("pause");
return 0;
}