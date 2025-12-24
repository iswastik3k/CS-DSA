// Sorting a string
// Sort -> Arranges characters in order of their ASCII values.

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    sort(str.begin(), str.end());
    cout << "Sorted string is: " << str << endl;

    return 0;
}