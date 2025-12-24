// to_string()
// Return the total number of digits in anumber.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string num = to_string(n);
    cout << "Total no. of digits in the number is: " << num.length() << endl;

    return 0;
}