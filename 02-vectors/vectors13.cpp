// Previous / Next greatest element array

#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> vi;
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        int val = 0;
        cin >> val;
        vi.push_back(val);
    }

    vector<int> pge(n, 0);
    int val = 0;
    for (int i = 0; i < n; ++i) {
        pge[i] = val;
        val = max(val, vi[i]);
    }

    vector<int> nge(n, 0);
    val = 0;
    for (int i = n - 1; i >= 0; --i) {
        nge[i] = val;
        val = max(val, vi[i]);
    }

    cout << "Previous greatest elemet array: ";
    for (int i = 0; i < n; ++i) {
        cout << pge[i] << " ";
    }
    cout << endl;

    cout << "Next greatest elemet array: ";
    for (int i = 0; i < n; ++i) {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}