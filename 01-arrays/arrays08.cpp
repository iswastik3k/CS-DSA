// Largest & Second largest element.

#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n, max = INT_MIN, smax = max;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        // Keep updating max with largest element so far.
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Another loop for finding second largest element.
    for (int i = 0; i < n; ++i) {
        if (arr[i] != max && arr[i] > smax) {
            smax = arr[i];
        }
    }

    cout << "Largest element is: " << max << "\nSecond Largest element is: " << smax << endl;

    return 0;
}