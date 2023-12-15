#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    

    long long flagstones_needed = (((n-1)/a)+1)* (((m-1)/a)+1);

    cout << flagstones_needed << endl;

    return 0;
}