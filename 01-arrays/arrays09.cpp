// Arrays and pointers
// Essence of arrays (Memory allocation)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 19, 6, 21, 4, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Name of array is itself a pointer pointing to first element of that array.
    int* ptr = arr;
    // If you have the address of first element of array, you have address of entire array,
    // Reason: Array elements are continuously stored in memory.

    // Accessing/Modifying the array with a pointer (MENACE).

    // *(ptr) = arr[0] = 12
    cout << *(ptr) << endl;

    // ptr[2] = arr[2] = 6
    // If a pointer have address of 1st element of array, It has complete freedom to access, modify the entire array.
    cout << ptr[2] << endl;

    // Printing entire array using pointer
    for (int i = 0; i < n; ++i) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // NOTE: After for loop, ptr is lost. Remember to reinitiate it.
    ptr = arr;

    // Printing entire array using addresses (dereference operator)
    for (int i = 0; i < n; ++i) {
        cout << *(ptr++) << " ";
    }
    cout << endl;

    ptr = arr;

    // Modifying array elements using pointer
    ptr[3] = 100;
    cout << "Enter 5th element: ";
    cin >> ptr[4];

    for (int i = 0; i < n; ++i) {
        cout << *(ptr++) << " ";
    }
    cout << endl;

    return 0;
}