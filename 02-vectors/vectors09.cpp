// Move negatives to left and positive to right.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> vi(n, 0);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> vi[i];
    }

    int s = 0;
    int e = n - 1;
    while (s < e) {
        if (vi[s] > 0 && vi[e] < 0) {
            swap(vi[s++], vi[e--]);
        } else if (vi[s] < 0) {
            ++s;
        } else {
            --e;
        }
    }

    for (int ele : vi) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}