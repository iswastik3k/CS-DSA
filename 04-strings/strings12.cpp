// Stringstream class
// Ignores spaces and captures words.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str = " i    am a    weird  string >.< ...    KNEEL HUMAN .";

    // Stringstream
    stringstream ss(str);
    string temp;
    while (ss >> temp) {
        cout << temp << endl;
    }

    return 0;
}