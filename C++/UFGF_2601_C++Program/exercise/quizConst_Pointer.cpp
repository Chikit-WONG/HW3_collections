#include<iostream>
using namespace std;
int main()
{
    int val = 42, x = 0;
const int *const p = &val;
const int *p1 = &val;
int *const p2 = &val;
// which statements are correct?
*p = 43; // ?
*p1 = 43; // ?
*p2 = 43; // ?
p = &x; // ?
p1 = &x; // ?
p2 = &x; // ?
}