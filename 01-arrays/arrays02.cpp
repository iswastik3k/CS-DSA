// Taking input & printing output in arrays.

#include <iostream>
using namespace std;

int main() {
    // Asking user to input size of array(n)
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Initializing array of size 'n'
    int arr[n];

    // Taking input using for loop for each index of array arr[i] -> i in range
    // [0, n-1]
    cout << "Enter " << n << " elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Printing each index of array using for loop, arr[i]. i in range [0, n-1]
    cout << "Entered array is : ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}