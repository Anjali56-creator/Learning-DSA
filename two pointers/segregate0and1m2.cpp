#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;

    // Input array elements
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0;
    int end = n - 1;

    // Two-pointer approach to segregate 0s and 1s
    while (start <= end) {
        if (arr[start] == 0) {
            start++;
        } else if (arr[end] == 1) {
            end--;
        } else {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Output the segregated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
