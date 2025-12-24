// stoi() -> String to Integer
// Given an array of strings, return the maximum number.

#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<string> arr = {"0114", "45", "0214", "00014", "0457", "001"};
    int maxnum = INT_MIN;
    for (int i(0); i < arr.size(); ++i) {
        maxnum = max(maxnum, stoi(arr[i]));
    }

    cout << "Maximum valued string in array is: " << maxnum << endl;

    return 0;
}