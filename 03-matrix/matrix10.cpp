// Wave Form - I
// Print matrix in wave form.
// 1 2 3
// 4 5 6   ->  1 2 3 6 5 4 7 8 9
// 7 8 9

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
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    // Printing in wave form
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2) {
                cout << grid[i][m - j - 1] << " ";
            } else {
                cout << grid[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
