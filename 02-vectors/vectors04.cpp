// Find the last occurance of x in the vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        vi.push_back(val);
    }

    int x;
    cout << "Enter x: ";
    cin >> x;

    int idx = -1;

    // Method 01
    // for (int i = 0; i < n; ++i) {
    //     if (vi[i] == x) {
    //         idx = i;
    //     }
    // }

    // Method 02 -> Optimizing using common sense
    // Last occurance = First occurance from end.
    // Then we can break the loop and save the trouble of checking entire vector.
    for (int i = n - 1; i >= 0; --i) {
        if (vi[i] == x) {
            idx = i;
            break;  // Early exit
        }
    }

    if (idx == -1) {
        cout << "x is not present in vector.\n";
    } else {
        cout << "Last occurance of x is: " << idx << endl;
    }

    return 0;
}