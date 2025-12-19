// Size and capacity

// How does vectors work internally?
// Vectors are just arrays. But with dynamic size.
// When a vector gets full and we push another element, it creates another vector double it's size.
// The elements from previous vector gets copied in new one, and the new element is added.

// capacity -> Total elements current vector can hold.
// Size -> No. of elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initializing vector with size and capacity 0.
    vector<int> v;
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(14);  // size = 1, capacity = 1
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(19);  // size = 2, capacity = 2
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(31);  // size = 3, capacity = 4
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(11);  // size = 4, capacity = 4
    cout << v.size() << " " << v.capacity() << endl;

    v.push_back(7);  // size = 5, capacity = 8
    cout << v.size() << " " << v.capacity() << endl;

    // NOTE: Popping elements back doesn't reduce capacity, only changes size.
    v.pop_back();  // size = 4, capacity = 8
    cout << v.size() << " " << v.capacity() << endl;

    v.pop_back();  // size = 3, capacity = 8
    cout << v.size() << " " << v.capacity() << endl;

    return 0;
}