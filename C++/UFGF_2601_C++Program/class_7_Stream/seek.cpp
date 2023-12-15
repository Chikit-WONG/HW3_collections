#include <fstream> 
#include <iostream>

int main()
{
    std::ofstream outfile;
    outfile.open("test.txt");
    std::cout << "detaulf tellp = " << outfile.tellp() << std::endl;
    outfile.write("This is an apple", 16);
    std::cout << "tellp = " << outfile.tellp() << std::endl;


    // ===================================================================
    // put position moved from 0 to 16 after write
    // ===================================================================



    outfile.seekp(-7, outfile.cur);   // beg, cur, end
    std::cout << "tellp = " << outfile.tellp() << std::endl;

    // ==================================================
    // move the put position back by 7
    // This is an apple
    // This is a|n apple    (| means the put )
    // ==================================================
    
    outfile << " sam"; 
    
    
    outfile.close();
    // now in test txt : 
    // This is a sample
    

    std::ifstream inFile("test.txt");
    inFile.seekg(10, inFile.beg);
    std::string str;
    inFile >> str;
    std::cout << str << std::endl;

    return 0;
}