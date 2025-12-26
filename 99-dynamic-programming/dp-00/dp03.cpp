// Leetcode - 746 / Min. Cost Climbing Stairs (Memoization)

#include <iostream>
#include <chrono>
#include <vector>
#include <climits>
using namespace std;

vector<int> dp;

int countCost(vector<int>& v, int n) {
    // Base Case
    if (n <= 1) {
        return v[n];
    }

    return v[n] + min(countCost(v, n - 1), countCost(v, n - 2));
}

int countCostMem(vector<int>& v, int n) {
    // Base Case
    if (n <= 1) {
        return v[n];
    }

    if (dp[n] == -1) {
        return dp[n] = v[n] + min(countCostMem(v, n - 1), countCostMem(v, n - 2));
    } else {
        return dp[n];
    }
}

int main() {
    int n;
    cout << "Enter no. of steps: ";

    cin >> n;

    vector<int> v(n);
    cout << "Enter cost of each step: ";
    for (int i(0); i < n; ++i) {
        cin >> v[i];
    }

    dp.assign(n + 1, -1);

    auto start = chrono::high_resolution_clock::now();
    cout << min(countCost(v, n - 1), countCost(v, n - 2)) << endl;
    auto end = chrono::high_resolution_clock::now();

    auto start0 = chrono::high_resolution_clock::now();
    cout << min(countCostMem(v, n - 1), countCostMem(v, n - 2)) << endl;
    auto end0 = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Execution time (recusrion): " << duration.count() << " microseconds\n";
    auto duration0 = chrono::duration_cast<chrono::microseconds>(end0 - start0);
    cout << "Execution time (recusrion + memoization): " << duration0.count() << " microseconds\n";

    return 0;
}