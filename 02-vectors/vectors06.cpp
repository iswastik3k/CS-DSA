// WAP to reverse the elements of an array (without using reverse function).

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

    // Two pointers algorithm
    // In place reversal, no extra space needed.
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        swap(vi[s++], vi[e--]);
    }

    for (int i = 0; i < n; ++i) {
        cout << vi[i] << " ";
    }
    cout << endl;

    return 0;
}