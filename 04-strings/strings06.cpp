// Substings -> .substr(start_idx, length_of_substr)
// abc -> a, b, c, ab, bc, abc
// Substring are continuous slices of a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "swastik";
    cout << s.substr(2, 3) << endl;

    return 0;
}