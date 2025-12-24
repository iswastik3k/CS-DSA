// Built-in string functions

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1 = "Solara";

    cout << ".size() -> " << s1.size() << endl;
    cout << ".length() -> " << s1.length() << endl;

    s1.push_back('y');
    cout << s1 << endl;
    s1.pop_back();
    cout << s1 << endl;

    string temp = "abc" + s1;
    cout << temp << endl;
    temp = s1 + "abc";
    cout << temp << endl;

    reverse(s1.begin(), s1.end());
    cout << "reverse(s1.begin(), s1.end()) -> " << s1 << endl;

    return 0;
}