#include<iostream>
using namespace std;
void printArraySize(int arr[]) {
// Inside this function, arr is a pointer to int (int*), not an array.
// sizeof(arr) will give you the size of a pointer, not the array.
std::cout << "Size of arr inside function: " << sizeof(arr) << " bytes" << std::endl;
}
int main() {
int myArray[] = {1, 2, 3, 4, 5};
// Determine the size of the array before it decays into a pointer.
std::cout << "Size of myArray before decay: " << sizeof(myArray) << " bytes" << std::endl;
// Pass myArray to the function, where it decays into a pointer.
printArraySize(myArray);
return 0;
}