// Passing vector to function

// Unlike arrays, vector are pass by value -> A new copy of vector is created in the function.

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> vi) {
    for (int i = 0; i < vi.size(); ++i) {
        cout << vi[i] << " ";
    }
    cout << endl;

    return;
}

void change1(vector<int> vi) {  // Pass by value
    vi[0] = 500;

    return;
}

void change2(vector<int>& vi) {  // Pass by refernce (&vi)
    vi[0] = 100;

    return;
}

int main() {
    vector<int> vi;
    vi.push_back(20);
    vi.push_back(74);
    vi.push_back(11);
    vi.push_back(31);
    vi.push_back(14);
    vi.push_back(19);
    vi.push_back(27);

    display(vi);

    change1(vi);
    display(vi);

    change2(vi);
    display(vi);

    return 0;
}