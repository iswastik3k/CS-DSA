// Calculate sum of elemenrs in a matrix.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    int sum = 0;
    cout << "Enter elements: ";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];

            // Calculate sum alternatively
            sum += grid[i][j];
        }
    }

    cout << "Sum of elements in matrix is: " << sum << endl;

    return 0;
}