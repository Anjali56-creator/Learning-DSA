#include <iostream>
using namespace std;
void toh(int n, int s, int h, int d) {
    // base case
    if (n == 1) {
        cout<<"Move disk "<<n<<"from"<<s<<"to"<<d<< endl;
        return;
    }
    // step 1: move n-1 disks from source to helper
    toh(n - 1, s, d, h);
    // step 2: move nth disk from source to destination
    cout<<"Move disk "<<n<<"from "<<s<<" to "<<d<< endl;
    // step 3: move n-1 disks from helper to destination
    toh(n - 1, h, s, d);
}

int main() {
    int n = 3;
    toh(n, 1, 2, 3);
    return 0;
}
