// Leetcode - 118 / Pascal's Triangle

// Hello, Pascal's triangle...again.
// This time we will solve it using 2D vectors.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<vector<int>> pscl;
    for (int i(0); i < n; ++i) {
        vector<int> rowi;
        for (int j(0); j <= i; ++j) {
            if (j == 0 || j == i) {
                rowi.push_back(1);
            } else {
                rowi.push_back(pscl[i - 1][j] + pscl[i - 1][j - 1]);
            }
        }
        pscl.push_back(rowi);
    }

    for (vector<int> vi : pscl) {
        for (int ele : vi) {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}