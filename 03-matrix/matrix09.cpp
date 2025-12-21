// Matrix Multiplication

// Be Cautious. Half of you might experience enlightenment and ascend by the end of this code.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, p, q;
    cout << "Enter no. of rows of Matrix A: ";
    cin >> n;
    cout << "Enter no. of columns of Matrix A: ";
    cin >> m;
    cout << "Enter no. of rows of Matrix B: ";
    cin >> p;
    cout << "Enter no. of columns of Matrix B: ";
    cin >> q;
    if (m != p) {
        // cerr, is just like cout but is used to print errors.
        cerr << "Matrix A and Matrix B cannot be multiplied.\n";
        // return 1, exits the code just like return 0, but return 1 means code exit with error.
        return 1;
    }

    vector<vector<int>> gridA(n, vector<int>(m));
    vector<vector<int>> gridB(p, vector<int>(q));

    cout << "Enter " << n * m << " elements of Matrix A: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> gridA[i][j];
        }
    }
    cout << "Enter " << p * q << " elements of Matrix B: ";
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < q; ++j) {
            cin >> gridB[i][j];
        }
    }

    // Resultant Matrix -> (n X m) * (p X q) -> (n X q)
    // res [i][j] -> Summation ( MatrixA[i][x] * MatrixB[y][j] ) , x: [0, m], y: [0, p]
    // Also Note: m = p (else condition) -> x and y: [0, m] OR [0, p]
    // For ex: res[2][1] -> (mA[2][0]*mB[0][1]) + (mA[2][1]*mB[1][1] + ...)
    vector<vector<int>> res(n, vector<int>(q));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < q; ++j) {
            int val = 0;
            for (int k = 0; k < p; ++k) {
                val += (gridA[i][k] * gridB[k][j]);
            }
            res[i][j] = val;
        }
    }

    cout << "Resultant Matrix: \n";
    // This is quantum loop.
    for (vector<int> v : res) {
        for (int ele : v) {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
    // Cheers for those who have made it through the code and didn't get KIA.
}