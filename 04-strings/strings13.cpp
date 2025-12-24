// Most occuring word in a string.

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    stringstream ss(str);

    vector<string> vec;
    string temp;
    while (ss >> temp) {
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());
    int maxcount = 1;
    int count = 1;
    string mostword = vec[0];
    for (int i(1); i < vec.size(); ++i) {
        if (vec[i] == vec[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxcount) {
            maxcount = count;
            mostword = vec[i];
        }
    }

    cout << "Most occuring word is: " << mostword << endl;

    return 0;
}