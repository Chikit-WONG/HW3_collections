#include<iostream>
using namespace std;
int factorialHelper(int n, int fact) {
if (n == 0 || n == 1)
return fact;
return factorialHelper(n - 1, fact * n);
}


int factorial(int n) {
return factorialHelper(n, 1);
}

int main()
{
    int a;
    cout<<"Please enter a number:"<<endl;
    cin>>a;
    cout<<factorial(a)<<endl;
    return 0;
}