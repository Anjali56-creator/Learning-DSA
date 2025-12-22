#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, arr[100];
    cout << "enter size of array: ";
    cin >> n;

    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = INT_MIN, prefix = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0)
            prefix = 0;
    }

    cout << "Maximum subarray sum = " << maxi << endl;
    return 0;
}
