// #ifndef SWAP_H_
// #define SWAP_H_

// #include<iostream>
// using namespace std;
// inline void swap(int num1,int num2)
// {
//     int temp=num1;
//     num1=num2;
//     num2=temp;
// }
// #endif

#ifndef SWAP_H_
#define SWAP_H_

#include <iostream>
using namespace std;

inline void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

#endif /* SWAP_H_ */