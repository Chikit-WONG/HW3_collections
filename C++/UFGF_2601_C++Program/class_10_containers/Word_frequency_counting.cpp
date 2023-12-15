// #include<iostream>
// #include<string>
// #include<sstream>
// #include<map>
// #include<algorithm>
// #include<cctype>

// using namespace std;

// int main()
// {
//     std::cout<<"Please input string"<<std::endl;
//     std::string input;
//     std::getline(cin,input);

//     std::replace_if(input.begin(),input.end(),[](char c){return std::ispunct(c);},' ');


//     std::istringstream iss(input);
//     std::string word;
//     std::map<std::string,int> wordCount;

//     while(iss>>word)
//     {
//         std::transform(word.begin(),word.end(),word.begin(),[](char c){ return std::tolower(c);}); // Fix the transform function call

//         wordCount[word]++;
//     }

//     for(const std::pair<std::string,int>& pair: wordCount)
//     {
//         cout<<pair.first<<" appear "<<pair.second<<" times"<<std::endl;
//     }

//     return 0;
// }



#include<iostream>
#include<string>
#include<cctype>
#include<sstream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    std::string input;
    std::cout<<"Please enter a string"<<std::endl;
    std::getline(cin,input);

    std::replace_if(input.begin(),input.end(),[](const char &c)->bool{return std::ispunct(c);},' ');

    std::stringstream iss(input);
    std::string word;
    std::map<std::string,int> wordCount;

    while(iss>>word)
    {
        std::transform(word.begin(),word.end(),word.begin(),[](const char& c){return std::tolower(c);});

        wordCount[word]++;
    }

    for(const std::pair<std::string,int> pair:wordCount)
    {
        std::cout<<pair.first<<" appear "<<pair.second<<" times."<<std::endl;
    }

    return 0;
}