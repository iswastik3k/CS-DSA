// Hello, Linear Search!

// Essence of linear search: Scan each element sequentially from start to end until the target is found.

#include <iostream>
using namespace std;

int main() {
    int n, tar;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> tar;

    // Linear Search (Optimized with flag -> exit loop as soon as target is found)

    bool flag = false;  // false -> target not present.
    for (int i = 0; i < n; ++i) {
        if (arr[i] == tar) {
            flag = true;  // true -> target is present.
            break;        // exit loop if target found.
        }
    }

    // Ternery Statement
    cout << ((flag) ? "Target is present\n" : "Target not present\n");

    return 0;
}

// Ternery statement Syntax:
// (Conditional statement) ? (Expression_if_true): (Expression_if_false);