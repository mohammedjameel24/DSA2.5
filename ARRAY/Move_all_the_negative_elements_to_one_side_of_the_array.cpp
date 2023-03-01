#include <iostream>
using namespace std;

void Move_all_the_negative_elements_to_one_side_of_the_array(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                // Swap the current element with the first negative element found
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {5, -2, 9, -7, 0, 4, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    Move_all_the_negative_elements_to_one_side_of_the_array(arr,n);

    // Print the resulting array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
