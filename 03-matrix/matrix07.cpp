// Leetcode - 867 / Transpose Matrix
// Transpose of a square matrix (In-place)
// No extra space -> Only for square matrices (Reason: structure remains same)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    cout << "Orignal matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // Transposing
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            swap(grid[i][j], grid[j][i]);
        }
    }

    cout << "Transpose matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}