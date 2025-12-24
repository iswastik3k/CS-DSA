// Take a string input and replace vowels with 'a'

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i(0); str[i] != '\0'; ++i) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[i] = 'a';
        } else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            str[i] = 'a';
        }
    }

    cout << "Modified string is: " << str << endl;

    return 0;
}