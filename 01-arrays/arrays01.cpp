// Syntax, Declaration & Initialization

// Syntax: datatype name [size] = {elements}
// example: char arr[3] = {'v', 'e', 'l'};

#include <iostream>
using namespace std;

int main() {
    // Initilization of arr01
    int arr1[3];
    // Declaration of arr01
    arr1[0] = 5;
    arr1[1] = 10;
    arr1[2] = 15;

    // Declaration of arr01
    int arr2[] = {11, 13, 17, 19, 23, 29, 31, 37, 43, 47};
    // NOTE: if you're not passing the size of array, you must pass the elements
    // at the time of creating, as shown in arr02.

    // Initialization and declaration of arr03
    int arr3[5] = {3, 7, 11, 15, 19};

    return 0;
}