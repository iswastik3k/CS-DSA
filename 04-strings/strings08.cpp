// Reverse a number

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = false;

    if (n < 0) {
        n *= -1;
        flag = true;
    }

    string num = to_string(n);
    reverse(num.begin(), num.end());
    if (flag) {
        num = '-' + num;
    }
    cout << "Reverse of number is: " << num << endl;

    return 0;
}