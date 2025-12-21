// Traversal through matrix

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    int grid[n][m];
    cout << "Enter " << n * m << " elements: ";

    // Use nested loops for traversals -> matrix = array of arrays
    // Outer for loop will switch rows.
    // Inner for loop will switch columns in each row.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}