// Leetcode - 42 / Trapping Rain Water
// Concept: Next / Pervious greatest element array

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> height;
    cout << "Enter heights (elemets): ";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        height.push_back(val);
    }

    vector<int> vel(n, 0);
    int val = 0;
    for (int i = n - 1; i >= 0; --i) {
        vel[i] = val;
        val = max(val, height[i]);
    }

    val = 0;
    for (int i = 0; i < n; ++i) {
        vel[i] = min(val, vel[i]);
        val = max(val, height[i]);
    }

    int water = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (vel[i] > height[i]) {
            water += (vel[i] - height[i]);
        }
    }

    cout << "Water trapped: " << water << endl;

    return 0;
}