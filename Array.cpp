#include <iostream>
using namespace std;

// Function to print the array elements and display the size of the pointer
void printArray(int *arr, int n) {
    // Display the size of the pointer (not the size of the array)
    cout << "In function " << sizeof(arr) << endl;

    // Modify the first element of the array to be 100
    arr[0] = 100;

    // Print the elements of the array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    // Declare an array of integers
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // Call the printArray function with the array and its size
    printArray(arr, n);
    cout << endl;

    // Display the size of the array and its elements in the main function
    cout << "In main " << sizeof(arr) << " and " << n << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}
