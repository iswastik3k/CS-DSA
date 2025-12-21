// Leetcode - 86 / Score after flipping Matrix

// Observation about binary nos. -> 1000 > 0111 (8>7) -> Left most bit matters the most.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter no. of rows: ";
    cin >> n;
    cout << "Enter no. of cols: ";
    cin >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    cout << "Enter n X m elements: ";
    for (int i(0); i < n; ++i) {
        for (int j(0); j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    // Flipping
    // Flip all rows with 0 at [i][0] (first pos -> MIB)
    for (int i(0); i < n; ++i) {
        if (!(grid[i][0])) {
            for (int j(0); j < m; ++j) {
                grid[i][j] ^= 1;
            }
        }
    }

    int c0(0), c1(0);
    // Flip all columns where no. of 0s > no.of 1s
    for (int i(0); i < m; ++i) {
        c0 = c1 = 0;
        for (int j(0); j < n; ++j) {
            if (grid[j][i]) {
                ++c1;
            } else {
                ++c0;
            }
        }

        if (c0 > c1) {
            for (int j(0); j < n; ++j) {
                grid[j][i] ^= 1;
            }
        }
    }

    cout << "Maximum value matrix after flipping: \n";

    for (vector<int> row : grid) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}