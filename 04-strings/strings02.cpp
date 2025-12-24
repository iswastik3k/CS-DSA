// Taking input

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    // cin>>str -> Wrong, It stops taking input after first 'space'. Only works for one word inputs.
    getline(cin, str);
    cout << "Entered string is: " << str << endl;

    return 0;
}