// Sum of array.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        // Keep adding each element to sum.
        // a+=b -> a = a+b
        sum += arr[i];
    }

    cout << "Sum of array is: " << sum << endl;

    return 0;
}