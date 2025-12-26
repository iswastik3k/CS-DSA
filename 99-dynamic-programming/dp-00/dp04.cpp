// Leetcode - 746 / Min. Cost Climbing Stairs (Tabulation)

#include <iostream>
#include <chrono>
#include <vector>
#include <climits>
using namespace std;

int countCost(vector<int>& v, int n) {
    // For any ith step, you must've come from i-1 or i-2 step.
    // The question demands minimum cost, so we will choose step with minimum cost.
    for (int i(2); i < n; ++i) {
        v[i] += min(v[i - 1], v[i - 2]);
    }

    return min(v[n - 1], v[n - 2]);
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

    auto start = chrono::high_resolution_clock::now();
    cout << countCost(v, n) << endl;
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Execution time (tabulation): " << duration.count() << " microseconds\n";

    return 0;
}