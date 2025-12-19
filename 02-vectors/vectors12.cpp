// Leetcode - 31 / Next Permutation

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of dgits: ";
    cin >> n;
    vector<int> vi;
    cout << "Enter digits: ";
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        vi.push_back(val);
    }

    // Find pivot
    int pividx = -1;
    for (int i = n - 2; i >= 0; --i) {
        if (vi[i] < vi[i + 1]) {
            pividx = i;
            break;
        }
    }

    if (pividx == -1) {
        reverse(vi.begin(), vi.end());
    } else {
        // Find just greater elements that pivot element and swap with pivot element.
        for (int i = n - 1; i > pividx; --i) {
            if (vi[i] > vi[pividx]) {
                swap(vi[i], vi[pividx]);
                break;
            }
        }

        // Sort rest of the array
        sort(vi.begin() + pividx + 1, vi.end());
    }

    for (int i = 0; i < n; ++i) {
        cout << vi[i];
    }
    cout << endl;

    return 0;
}