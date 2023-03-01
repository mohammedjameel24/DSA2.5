#include <iostream>
using namespace std;


void Find_the_maximum_and_minimum_element_in_an_array(int arr[], int n, int& max, int& min) {
    max = arr[0];
    min = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        else if(arr[i] < min) {
            min = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 1, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    
    Find_the_maximum_and_minimum_element_in_an_array(arr, n, max, min);
    
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    
    return 0;
}
