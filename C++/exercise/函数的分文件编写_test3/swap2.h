#ifndef SWAP_H_
#define SWAP_H_
#include<iostream>
using namespace std;
// inline void swap2(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
//     cout<<"hi"<<endl;

// }
// #endif

// #ifndef SWAP_H_
// #define SWAP_H_

// #include <iostream>
// using namespace std;

inline void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

#endif /* SWAP_H_ */