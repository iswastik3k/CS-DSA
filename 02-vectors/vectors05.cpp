// Leetcode - 01 / Two Sum

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        vi.push_back(val);
    }

    int tar = 0;
    cout << "Enter the target sum: ";
    cin >> tar;

    // Initializing the loop variables outside the loops so we can use it even after loop has ended.
    int i = 0;
    int j = 0;

    bool flag = false;

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (vi[i] + vi[j] == tar) {
                flag = true;
                break;
            }
        }

        if (flag) {
            break;
        }
    }

    if (flag == true) {
        cout << "The doublets whose sum equals tar are: " << i << " " << j << endl;
    } else {
        cout << "No such pairs found.\n";
    }

    return 0;
}