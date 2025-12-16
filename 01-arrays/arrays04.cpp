// sizeof operator.

// sizeof -> Returns the size of a object/expression (in bytes).

// Syntax: sizeof(expression/object);
// example: sizeof(int), sizeof(arr05), sizeof(float)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 6, 1, 9, 0, 3, 1, 6, 7, 3, 5};
    // Size of array = size of total array / size of any 1 element in that array.
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of array is: " << size << endl;

    return 0;
}