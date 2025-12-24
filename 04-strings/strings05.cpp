// Take a string input and reverse it's first half

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    reverse(str.begin(), str.begin() + (str.size() / 2));
    cout << str << endl;

    return 0;
}