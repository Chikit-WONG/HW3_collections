#include <iostream>
#include <string>
using namespace std;

bool isEven(int character_number) {
    return character_number % 2 == 0;
}

int main() {
    string character;
    cout << "Please enter a character: ";
    cin >> character;
    int character_number = character.length();
    string sub;

    if (isEven(character_number)) {
        int a = character_number / 2;
        sub = character.substr(a - 1, 2);
    }
    else {
        int b = (character_number - 1) / 2;
        sub = character.substr(b, 1);
    }

    cout << "The middle character(s) of this word is(are): " << sub << endl;
    return 0;
}