// Adding 2 matrices

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows of matrix 1: ";
    cin >> n;
    cout << "Enter number of columns of matrix 1: ";
    cin >> m;

    int p, q;
    cout << "Enter number of rows of matrix 2: ";
    cin >> p;
    cout << "Enter number of columns of matrix 2: ";
    cin >> q;

    if (n != p || m != q) {
        cout << "Matrix A and B cannot be added.\n";
    } else {
        cout << "Enter n X m elements of matrix A: \n";
        vector<vector<int>> mtx1(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mtx1[i][j];
            }
        }

        cout << "Enter p X q elements of matrix B: \n";
        vector<vector<int>> mtx2(p, vector<int>(q));
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                cin >> mtx2[i][j];

                // Adding In-place
                mtx2[i][j] += mtx1[i][j];
            }
        }

        cout << "Matrix A + Matrix B: \n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << mtx2[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}