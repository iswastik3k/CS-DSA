// Leetcode - 62 / Unique Paths

// OUTPUT:
// Enter no. of rows: 15
// Enter no. of columns: 15
// No. of unique paths(recursion): 40116600
// No. of unique paths(recursion + memoization): 40116600
// No. of unique paths(tabulation): 40116600
// Execution time (recursion): 432036 microseconds
// Execution time (recursion + memoization): 9 microseconds
// Execution time (tabulation): 9 microseconds

#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

vector<vector<long long>> dp;

long long uqPaths(int n, int m) {
    if (n == 0 && m == 0) {
        return 1;
    }
    if (n < 0 || m < 0) {
        return 0;
    }

    return uqPaths(n, m - 1) + uqPaths(n - 1, m);
}

long long uqPaths0(int n, int m) {
    if (n == 0 && m == 0) {
        return 1;
    }
    if (n < 0 || m < 0) {
        return 0;
    }

    if (dp[n][m] == -1) {
        return dp[n][m] = uqPaths0(n, m - 1) + uqPaths0(n - 1, m);
    }

    return dp[n][m];
}

long long uqPaths1(int n, int m) {
    vector<vector<long long>> grid(n + 1, vector<long long>(m + 1, 1));
    for (int i(0); i <= n; ++i) {
        for (int j(0); j <= m; ++j) {
            if (i && j) {
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            }
        }
    }

    return grid[n][m];
}

int main() {
    int n, m;
    cout << "Enter no. of rows: ";
    cin >> n;
    cout << "Enter no. of columns: ";
    cin >> m;

    dp.assign(n, vector<long long>(m, -1));

    auto start = chrono::high_resolution_clock::now();
    cout << "No. of unique paths(recursion): " << uqPaths(n - 1, m - 1) << endl;
    auto end = chrono::high_resolution_clock::now();

    auto start0 = chrono::high_resolution_clock::now();
    cout << "No. of unique paths(recursion + memoization): " << uqPaths0(n - 1, m - 1) << endl;
    auto end0 = chrono::high_resolution_clock::now();

    auto start1 = chrono::high_resolution_clock::now();
    cout << "No. of unique paths(tabulation): " << uqPaths1(n - 1, m - 1) << endl;
    auto end1 = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Execution time (recursion): " << duration.count() << " microseconds\n";
    auto duration0 = chrono::duration_cast<chrono::microseconds>(end0 - start0);
    cout << "Execution time (recursion + memoization): " << duration0.count() << " microseconds\n";
    auto duration1 = chrono::duration_cast<chrono::microseconds>(end1 - start1);
    cout << "Execution time (tabulation): " << duration1.count() << " microseconds\n";

    return 0;
}