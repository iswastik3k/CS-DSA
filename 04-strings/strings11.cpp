// Given a string of english alphabets. Print the character occuring most number of times.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    vector<int> fcy(256, 0);

    for (int i(0); i < str.length(); ++i) {
        fcy[str[i]]++;
    }

    int maxidx = 0;
    for (int i(0); i < fcy.size(); ++i) {
        if (fcy[i] > fcy[maxidx]) {
            maxidx = i;
        }
    }

    cout << "Maximum occuring character is: " << char(maxidx) << endl;

    return 0;
}