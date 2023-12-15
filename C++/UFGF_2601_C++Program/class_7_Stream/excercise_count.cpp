#include <fstream>
#include <iostream>
#include <string>

struct FileInfo {
    FileInfo() : number_of_chars(0), number_of_lines(0) {}
    int number_of_lines;
    int number_of_chars;
};

FileInfo getFileInfo(std::ifstream &in) {
    FileInfo result;
    std::string line;
    while (getline(in, line)) {
        result.number_of_lines += 1;
        result.number_of_chars += line.length();
    }
    return result;
}

std::ostream& operator<<(std::ostream &out, FileInfo fi) {
    out << fi.number_of_chars << "  " << fi.number_of_lines;
    return out;
}

int main() {
    while (true) {
        std::string filename;
        std::cin >> filename;
        
        std::ifstream inFile(filename);
        if (!inFile.is_open()) {
            break;
        }

        FileInfo res = getFileInfo(inFile);
        
        std::cout << res << std::endl;

    }
    return 0;
}