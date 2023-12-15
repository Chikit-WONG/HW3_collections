#include <iostream>
#include <string>

std::string transformString(int p1, int p2, int p3, const std::string& input_string) {
    std::string result;

    for (size_t i = 0; i < input_string.length(); i++) {
        if (input_string[i] == '-') {
            if (i > 0 && i < input_string.length() - 1) {
                char left_char = input_string[i - 1];
                char right_char = input_string[i + 1];

                bool valid = false;
                if ((std::islower(left_char) && std::islower(right_char)) ||
                    (std::isdigit(left_char) && std::isdigit(right_char))) {
                    if (p3 == 1 && right_char > left_char) {
                        valid = true;
                    } else if (p3 == 2 && right_char < left_char) {
                        valid = true;
                    }
                }

                if (valid) {
                    std::string transformed_substring;

                    if (p1 == 1 || p1 == 2) {
                        char start_char = (p1 == 1) ? left_char : std::toupper(left_char);
                        char end_char = (p1 == 1) ? right_char : std::toupper(right_char);

                        for (char c = start_char; c <= end_char; c++) {
                            for (int j = 0; j < p2; j++) {
                                transformed_substring += c;
                            }
                        }
                    } else if (p1 == 3) {
                        int num_stars = right_char - left_char;
                        for (int j = 0; j < num_stars; j++) {
                            transformed_substring += "*";
                        }
                    }

                    result += transformed_substring;
                    continue;
                }
            }
        }

        result += input_string[i];
    }

    return result;
}

int main() {
    int p1, p2, p3;
    std::cin >> p1 >> p2 >> p3;
    std::cin.ignore();  // Ignore the newline character

    std::string input_string;
    std::getline(std::cin, input_string);

    std::string output = transformString(p1, p2, p3, input_string);
    std::cout << output << std::endl;

    return 0;
}