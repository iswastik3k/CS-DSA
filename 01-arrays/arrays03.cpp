// Elements less than x in an array.

#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elemets: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter x: ";
    cin >> x;

    cout << "Elements less than " << x << " are: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] < x) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}