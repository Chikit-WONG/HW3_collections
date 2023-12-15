#include<iostream>
using namespace std;
int getSize(double *b){
return sizeof(b);
}
int main() {
double a[10];
std::cout << sizeof(a) << std::endl;
std::cout << getSize(a) << std::endl;
return 0;
}