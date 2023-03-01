#include <algorithm>
#include <iostream>
using namespace std;

void findKthMaxMin(int arr[], int n, int k) {
    // Sort the array in ascending order
    sort(arr, arr + n);

    // Find the Kth minimum element
    int kthMin = arr[k - 1];
    cout << "Kth minimum element: " << kthMin << endl;

    // Find the Kth maximum element
    int kthMax = arr[n - k];
    cout << "Kth maximum element: " << kthMax << endl;
}

int main() {
    int arr[] = { 4,9,1,6,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    findKthMaxMin(arr, n, k);
    return 0;
}
