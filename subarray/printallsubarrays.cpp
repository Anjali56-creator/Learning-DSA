#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nAll subarrays are:\n";

    // Generate all subarrays
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "{ ";
            for (int k = start; k <= end; k++) {
                cout << arr[k];
                if (k < end) cout << ", ";
            }
            cout << " }" << endl;
        }
    }

    return 0;
}
