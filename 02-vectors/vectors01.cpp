// Vector basics

// Syntax:
// vector<int> v; -> Initializes an empty vector.
// vector<int> v(5); -> Initializes a vector with capacity 5
// vector<int> v(5, 3); -> Initializes a vector with size 5 and each element is 3.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v) {
    // v.size() -> Returns the size of vector.
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;  // Initializes an empty 'int' vector 'v'.

    // .push_back(x) -> append 'x'at the end of vector.
    v.push_back(20);
    v.push_back(14);
    v.push_back(31);
    v.push_back(19);
    v.push_back(30);
    v.push_back(21);
    v.push_back(11);

    // v = {20, 14, 31, 19, 30, 21, 11}
    display(v);

    // .pop_back() -> removes last element from the vector.
    v.pop_back();
    v.pop_back();

    // v = {20, 14, 31, 19, 30}
    display(v);

    // Sorting vector
    sort(v.begin(), v.end());
    display(v);

    return 0;
}