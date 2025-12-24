// Leetcode - 14 / Longest Common Prefix

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter no.  of words: ";
    cin >> n;
    vector<string> v(n);
    cout << "Enter words: ";
    for (int i(0); i < n; ++i) {
        cin >> v[i];
    }

    if (v.size() == 1) {
        cout << "Longest common prefix is: " << v[0] << endl;
        return 0;  // Bad practice. Dont do if you're a good boy!
    }

    string pfx = "";
    sort(v.begin(), v.end());
    int p1(0), p2(0);

    while (p1 < v[0].length() && p2 < v[n - 1].length()) {
        if (v[0][p1] == v[n - 1][p2]) {
            pfx += v[0][p1];
            p1++;
            p2++;
        } else {
            break;
        }
    }

    cout << "Longest common prefix is: " << pfx << endl;

    return 0;
}