// Sort the array of 0's and 1's

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

    // Two pointers
    int op = 0, zp = 0;
    for (op = 0; op < n; ++op) {
        if (vi[zp] == 0) {
            ++zp;
        } else if (vi[op] == 0) {
            swap(vi[op], vi[zp++]);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << vi[i] << " ";
    }
    cout << endl;

    return 0;
}