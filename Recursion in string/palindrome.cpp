#include<iostream>
using namespace std;
bool checkpal(string str, int start, int end) {
    // base case
    if(start >= end) {
        return true;
    }
    if(str[start] != str[end]) {
        return false;
    }
    return checkpal(str, start + 1, end - 1);
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    if(checkpal(str, 0, n - 1)) {
        cout << "Palindrome" << endl;
    } 
    else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}
