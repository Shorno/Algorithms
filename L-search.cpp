#include <iostream>
using namespace std;

/* In terms of time complexity: -

Worst Case: O(n) - In the worst case, where the key is not present or is at the last position, the algorithm needs to iterate through the entire array of size n.

Best Case: O(1) - In the best case, where the key is found at the first position, the algorithm requires only one iteration.

Average Case: O(n/2) - On average, the algorithm may need to search half of the array, so the average time complexity is approximately O(n/2). However, in big-O notation, constants are usually dropped, so we simply say the average time complexity is O(n).

Linear search has a linear time complexity because the number of operations grows linearly with the size of the input array. */











// Function to perform linear search
void linear_search(const int arr[], int n, int key) {
    // Linear search involves iterating through the array once
    // The worst-case scenario is that the key is not present in the array, so we iterate through the entire array
    // In the best case, the key is found in the first position, and we iterate only once
    // In the average case, we might need to iterate n/2 times on average
    for (int i = 0; i < n; ++i) {
        // Each comparison inside the loop takes constant time
        if (arr[i] == key) {
            // If the key is found, print the index and return
            cout << key << " is found at index " << i << endl;
            return;
        }
    }

    // If the loop completes without finding the key, print that the key is not found
    cout << key << " is not found" << endl;
}

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // User input for the key to search
    cout << "Enter a key to search: ";
    int key;
    cin >> key;

    // Call the linear search function
    linear_search(arr, n, key);

    return 0;
}
