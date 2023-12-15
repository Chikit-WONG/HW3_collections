#include<iostream>
using namespace std;
int main()
{   bool testPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
    int num;
bool isPrime = false;
if (num % 2) {
if (testPrime(num))
isPrime = true;
else
isPrime = false;
} else {
if (num == 2)
isPrime = true;
else
isPrime = false;
}
}