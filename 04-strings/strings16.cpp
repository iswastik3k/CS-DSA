// Leetcode - 205 / Isomorphic Strings

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isIsomorph(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    vector<int> map(256, -1);

    // s1 POV
    for (int i(0); i < s1.length(); ++i) {
        if (map[s1[i]] == -1) {
            map[s1[i]] = (int)s2[i];
        } else {
            if (map[s1[i]] != (int)s2[i]) {
                return false;
            }
        }
    }

    map.assign(256, -1);

    // s2 POV
    for (int i(0); i < s1.length(); ++i) {
        if (map[s2[i]] == -1) {
            map[s2[i]] = (int)s1[i];
        } else {
            if (map[s2[i]] != (int)s1[i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string s1;
    string s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    cout << isIsomorph(s1, s2) << endl;
    ;

    return 0;
}