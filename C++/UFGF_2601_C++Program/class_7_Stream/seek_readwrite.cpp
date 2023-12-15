#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

int main() {
    // Open a file for reading and writing
    std::fstream file("seek_read_write.txt", std::ios::in | std::ios::out | std::ios::ate);

    // Check if the file is open
    if (!file.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return 1;
    }

    // Writing to the file
    file << "Appending a line to the file.\n";
    file.flush(); // Flush the output buffer to ensure all data is written to the file


    // Reading from the file
    file.seekg(0, file.beg);  // Move the read pointer to the beginning of the file
    std::cout << file.tellg() << std::endl;
    std::cout << file.tellp() << std::endl;
    
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    assert(file.eof());
    file.clear();
    assert(file.is_open() && !file.fail());
    // Now let's suppose we want to update a line in the middle of the file
    // For simplicity, let's assume we know the position (in bytes) where this line starts
    // For example, let's say the line starts at the 20th byte
    std::streampos writePos = 10; 

    // Move the write pointer to the desired position
    file.seekp(writePos);

    std::cout << file.tellg() << std::endl;
    std::cout << file.tellp() << std::endl;

    // Write a new line (must be the same length or shorter to not overwrite subsequent data)
    file << "??????" << std::flush;

    // Move the read pointer to the same position to verify changes
    file.seekg(writePos);

    std::cout << file.tellg() << std::endl;
    std::cout << file.tellp() << std::endl;

    // Read the new line to verify the update
    std::getline(file, line);
    std::cout << "Updated line: " << line << std::endl;

    // Close the file
    file.close();

    return 0;
}