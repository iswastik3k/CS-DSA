// Leetcode - 240 / Search in a 2D Matrix II

#include <iostream>
#include <vector>
#include <algorithm>
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

    int key(0);
    cout << "Enter target: ";
    cin >> key;

    // We can either start searching from top right or bottom left.
    // Try to observe why only top right and bottom left, why not bottom right or top left.
    bool found(0);
    int r(0), c(m - 1);
    while (r < n && c >= 0) {
        if (grid[r][c] == key) {
            found = 1;
            break;
        } else if (grid[r][c] > key) {
            --c;
        } else {
            ++r;
        }
    }

    cout << ((found) ? "Target present.\n" : "Target not present.\n");

    return 0;
}