// The essence of Null character (\0).
// Compiler by default adds a '\0' at the end of a string to mark it's completion.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Pulse";

    // Iterate over a string + Proof of \0 existence
    // We know the \0 is present at the end of any string -> index = str.size()
    for (int i(0); i <= str.size(); ++i) {
        if (str[i] == '\0') {
            cout << "\\0 present at index " << i << endl;
        } else {
            cout << str[i] << endl;
        }
    }

    // Iterating using Null character
    for (int i(0); str[i] != '\0'; ++i) {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}