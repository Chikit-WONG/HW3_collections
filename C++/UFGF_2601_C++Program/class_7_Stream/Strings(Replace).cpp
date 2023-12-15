#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::string base="this is a test string.";
std::string str2="n example";
std::string str3="sample phrase";
std::string str=base; // "this is a test string."
str.replace(9,5,str2); // "this is an example string." (1)
cout<<str<<endl;
str.replace(19,6,str3,7,6); // "this is an example phrase." (2)
str.replace(8,10,"just a"); // "this is just a phrase." (3)
str.replace(8,6,"a shorty",7); // "this is a short phrase." (4)
cout<<str<<endl;
str.replace(22,1,3,'!'); // "this is a short phrase!!!" (5)
}