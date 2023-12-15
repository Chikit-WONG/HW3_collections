#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;
int main()
{
//     double a = 3.1415926534;
// double b = 2006.0;
// double c = 1.0e-10;
// std::cout.precision(6);
// std::cout << "default:\n";
// std::cout << a << '\n' << b << '\n' << c << '\n';
// std::cout << '\n';
// std::cout << "fixed:\n" << std::fixed;
// std::cout << a << '\n' << b << '\n' << c << '\n';
// std::cout << '\n';
// std::cout << "scientific:\n" << std::scientific;
// std::cout << a << '\n' << b << '\n' << c << '\n';
int n;
n=70;
std::cout  << std::bitset<8>(n) << '\n';
return 0;
}