// N-th Fibonacci Term
// Hello, Tabulation!
// Bottom-Up DP

#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

// Tabulation
long long fiby(int n) {
    vector<long long> v(n + 1, -1);
    // Smallest sub problems we can answer
    // fib(0) = 0, fib(1) = 1
    for (int i(0); i <= n; ++i) {
        if (i <= 1) {
            v[i] = i;
        } else {
            v[i] = v[i - 1] + v[i - 2];
        }
    }

    return v[n];
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    auto start = chrono::high_resolution_clock::now();
    cout << "N-th fibonacci number is: " << fiby(n) << endl;
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Execution time (tabulation): " << duration.count() << " microseconds\n";

    return 0;
}