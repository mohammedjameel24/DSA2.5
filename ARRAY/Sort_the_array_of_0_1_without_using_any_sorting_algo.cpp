#include <iostream>
using namespace std;

//**DUTCH NATIONAL FLAG ALGORITHM**//

void sortArray(int arr[], int n) {
    int low = 0;     // Index of first non-zero element
    int high = n - 1; // Index of last non-two element
    int mid = 0;      // Index of current element being processed

    // Traverse the array and swap elements to partition them into three regions: 0s, 1s, and 2s
    while (mid <= high) {
        if (arr[mid] == 0) {
            // If current element is 0, swap with first non-zero element
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            // If current element is 1, leave it in its position
            mid++;
        }
        else {
            // If current element is 2, swap with last non-two element
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = { 0, 1, 2, 0, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
