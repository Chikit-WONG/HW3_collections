#include<iostream>
using namespace std;
int main()
{
    all: lab01.cpp
	g++ $^ -o lab01
	./lab01
}
