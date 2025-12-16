// Memory Allocation in arrays is CONTINUOUS.

// Elements of array are arranged continuously in memory.

// & operator is used to print address of an object.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};

    // Printing address of array.
    cout << "Address of array arr is: " << &arr << endl;

    // Printing addresses of each element in array.
    for (int i = 0; i < 5; ++i) {
        cout << "Address of " << i << "th element is : " << &arr[i] << endl;
    }

    return 0;
}

// OBSERVATIONS:

// 1. Address of arr is same as address of arr[0]th element.
// 2. The name of any array is a pointer, pointing to 0th element of that array.
// 3. The differnece in between addresses of 2 consequtive elemnts is 4 bytes in case of integer array. (size of int).
// 4. The addresses are stored in Hexadecimal system. (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
// 5. Example :
// Address of array arr is: 0x7ffce4d65b30
// Address of 0th element is : 0x7ffce4d65b30
// Address of 1th element is : 0x7ffce4d65b34
// Address of 2th element is : 0x7ffce4d65b38
// Address of 3th element is : 0x7ffce4d65b3c
// Address of 4th element is : 0x7ffce4d65b40