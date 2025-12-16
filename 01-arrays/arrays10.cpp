// Passing array to function.

#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return;
}

void change(int brr[], int n) {
    // Let's try to change last element of array.
    brr[n - 1] = 100;
    // Will it reflect in orignal array in main function?

    return;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display orignal array
    display(arr, n);
    // Try to modify array via change function.
    change(arr, n);
    // Display again and observe if changes reflect in orignal array.
    display(arr, n);

    return 0;
}

// Observation:
// 1. Yes, the change does reflect in orignal array. Why?
// 2. RECALL: Array name is itself a pointer, containing address of the first elemnet of that array.
// 3. Therefore, if you pass an array to a function, it's by default pass by reference.
// 4. You're not passing the 'name' of array, you're passing the 'address' of actual array itself.
// 5. Address of an array = Address of first element of that array.
// 6. int arr[] -> arr = &arr = &arr[0]