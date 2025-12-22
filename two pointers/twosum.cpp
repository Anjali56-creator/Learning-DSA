#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    // Input array elements
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0;
    int end = n - 1;
    int target;
    cout<<"enter target value: ";
    cin>>target;

    // Two-pointer approach to segregate 0s and 1s
    while (start < end) {
        if (arr[start]+arr[end] == target) {
            return 1;
        } else if (arr[end] +arr[end]< target) {
            start++;
        } else {
            end--;
        }
    }
    

    return 0;
}
