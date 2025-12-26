// N-th Fibonacci Term
// Hello, Memoization!
// Top-Down DP

// OUTPUTS:

// Enter n: 10
// N-th fibonacci number is: 55
// N-th fibonacci number is: 55
// Execution time (recursion with memoization): 10 microseconds (Hold Up)
// Execution count (basic recursion): 2 microseconds (HEH! Joker)

// Enter n: 20
// N-th fibonacci number is: 6765
// N-th fibonacci number is: 6765
// Execution time (recursion with memoization): 11 microseconds (Hm.)
// Execution count (basic recursion): 42 microseconds (Still, I'm close.)

// Enter n: 50
// N-th fibonacci number is: 12586269025
// N-th fibonacci number is: 12586269025
// Execution time (recursion with memoization): 13 microseconds (HAHAHA) MENACE!!!
// Execution count (basic recursion): 77094776 microseconds ( ...)

#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

vector<long long> dp;

// Recursion + Memoization
long long fiby(int n) {
    if (n <= 1) {
        return n;
    }

    if (dp[n] == -1) {
        return dp[n] = fiby(n - 1) + fiby(n - 2);
    }

    return dp[n];
}

// Basic Recursion
long long fiby0(int n) {
    if (n <= 1) {
        return n;
    }

    return fiby0(n - 1) + fiby0(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    dp.assign(n + 1, -1);
    auto start = chrono::high_resolution_clock::now();
    cout << "N-th fibonacci number is: " << fiby(n) << endl;
    auto end = chrono::high_resolution_clock::now();

    auto start0 = chrono::high_resolution_clock::now();
    cout << "N-th fibonacci number is: " << fiby0(n) << endl;
    auto end0 = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Execution time (recursion with memoization): " << duration.count() << " microseconds\n";

    auto duration0 = chrono::duration_cast<chrono::microseconds>(end0 - start0);
    cout << "Execution count (basic recursion): " << duration0.count() << " microseconds\n";

    return 0;
}