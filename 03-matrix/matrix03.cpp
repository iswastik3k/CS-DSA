// Largest number in a 2D array.
// AND....
// Hello... 2D vectors!

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    // Vector of vectors of int. Yep, read that again.
    vector<vector<int>> hush(n, vector<int>(m));

    // We'll try to be smart and compute largest element alternatively while
    // taking input.
    int maxx = INT_MIN;

    cout << "Enter n X m elements: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> hush[i][j];
            maxx = max(maxx, hush[i][j]);
        }
    }

    cout << "Largest element is: " << maxx << endl;

    return 0;
}