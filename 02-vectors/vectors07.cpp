// Leetcode - 189 / Rotate Array

// Rotate the array to the right by k steps, where k is non-negative.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        vi.push_back(val);
    }

    int k = 0;
    cout << "Enter k: ";
    cin >> k;

    k %= n;  // Eliminating roatations by n steps -> Rotate by n steps = Same array

    // sorcery
    reverse(vi.begin(), vi.end());        // Reverse entire array
    reverse(vi.begin(), vi.begin() + k);  // Reverse first k elements
    reverse(vi.begin() + k, vi.end());    // Reverse left over elements
                                          // and BOOM. MAGIC.

    for (int i = 0; i < n; ++i) {
        cout << vi[i] << " ";
    }
    cout << endl;

    return 0;
}