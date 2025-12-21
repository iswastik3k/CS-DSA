// Transpose of a matrix
// O(n) Extra Space

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter no. of rows: ";
    cin >> n;
    cout << "Enter no. of columns: ";
    cin >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> grid_tpose(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            grid_tpose[i][j] = grid[j][i];
        }
    }

    cout << "Orignal matrix: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose matrix: \n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid_tpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Observations:
// If orignal matrix is of order n X m -> Transpose will be of order m X n
// [i][j] index of transpose matrix = [j][i] index of orignal matrix