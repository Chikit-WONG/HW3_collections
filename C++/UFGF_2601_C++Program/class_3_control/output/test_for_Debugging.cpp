#include <iostream>
using namespace std;
int a = 0;
int b = 0;
int f(int c)
{
int n = 0;
a = c;
if (n < c) n = a + b;
return n;
}
int g(int c)
{
int n = 0;
int a = c;
if (n < f(c)) n = a + b;
return n;
}
int main()
{
int i = 1;
int b = g(i);
cout << a + b + i << "\n";
return 0;
}