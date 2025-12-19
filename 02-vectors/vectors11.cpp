// Leetcode - 88 / Merge Sorted Arrays
// 1423 -> 1432

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter size of array 1: ";
    cin >> n;
    cout << "Enter size of array 2: ";
    cin >> m;
    vector<int> v1(m + n, 0);
    cout << "Enter elements of v1: ";
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    vector<int> v2(m, 0);
    cout << "Enter elements of v2: ";
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }

    int p1, p2, p3;
    p1 = n - 1;
    p2 = m - 1;
    p3 = (m + n) - 1;

    while (p1 >= 0 and p2 >= 0) {
        if (v1[p1] > v2[p2]) {
            v1[p3--] = v1[p1--];
        } else {
            v1[p3--] = v2[p2--];
        }
    }

    while (p2 >= 0) {
        v1[p3--] = v2[p2--];
    }

    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}