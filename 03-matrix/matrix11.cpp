// Leetcode - 54 / Spiral Matrix

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
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

    // Printing in Spiral form
    int rs(0), re(n - 1), cs(0), ce(m - 1);
    while (rs <= re && cs <= ce) {
        for (int i(cs); i <= ce; ++i) {
            cout << grid[rs][i] << " " << flush;
            this_thread::sleep_for(chrono::milliseconds(80));
        }
        ++rs;

        for (int i(rs); i <= re; ++i) {
            cout << grid[i][ce] << " " << flush;
            this_thread::sleep_for(chrono::milliseconds(80));
        }
        --ce;

        if (cs <= ce && rs <= re) {
            for (int i(ce); i >= cs; --i) {
                cout << grid[re][i] << " " << flush;
                this_thread::sleep_for(chrono::milliseconds(80));
            }
            --re;

            for (int i(re); i >= rs; --i) {
                cout << grid[i][cs] << " " << flush;
                this_thread::sleep_for(chrono::milliseconds(80));
            }
            ++cs;
        }
    }
    cout << endl;

    return 0;
}