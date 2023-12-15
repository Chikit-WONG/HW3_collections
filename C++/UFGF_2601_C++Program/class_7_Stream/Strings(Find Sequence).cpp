#include <iostream>
#include <string>
using namespace std;
int main()
{
    // cout<<std::string::npos<<endl;
    // std::string str("There are two needles in this haystack with needles.");
    // std::string str2("needle");
    // std::size_t found = str.find(str2);
    // if (found != std::string::npos)
    //     std::cout << "first 'needle' found at: " << found << '\n';
    // found = str.find("needles are small", found + 1, 6);
    // if (found != std::string::npos)
    //     std::cout << "second 'needle' found at: " << found << '\n';
    // found = str.find("haystack");
    // if (found != std::string::npos)
    //     std::cout << "'haystack' also found at: " << found << '\n';
    string str="hahaheihei haheiha";
    size_t found=str.find("haha");
    if(found!=std::string::npos)
    {
        cout<<"the first haha is in "<<found<<endl;
    }
    found=str.find("haha",found+1,2);
    if(found!=std::string::npos)
    {
        cout<<"the second ha is in "<<found<<endl;
    }
    return 0;
}