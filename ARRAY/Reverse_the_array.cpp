#include <iostream>

using namespace std;

void reverse_the_array(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


int main()
{
    int arr[] = {5, 1, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse_the_array(arr, n);

    cout << "reverse array is :" << endl;

    for(int i = 0 ; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
 
}