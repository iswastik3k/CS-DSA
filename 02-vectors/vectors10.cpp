// Leetcode - 75 / Sort Colors
// Sort the aray of 0s, 1s and 2s.

// Concept: Dutch National Flag Algorithm

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> vi(n, 0);
    cout << "Enter elements (0, 1 or 2): ";
    for (int i = 0; i < n; ++i) {
        cin >> vi[i];
    }

    int p0, p1, p2;
    p0 = p1 = 0;
    p2 = n - 1;
    while (p1 <= p2) {
        // We'll put conditions on p1.
        if (vi[p1] == 0) {
            swap(vi[p0++], vi[p1++]);
        } else if (vi[p1] == 1) {
            ++p1;
        } else {
            swap(vi[p1], vi[p2--]);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << vi[i] << " ";
    }
    cout << endl;

    return 0;
}