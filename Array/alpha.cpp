//Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include <iostream>
using namespace std;
int main()
{
    char c[26];
    // STORE values in array
    for(int i = 0; i < 26; i++)
    {
        c[i] = 'a' + i;
    }
    cout << "The characters from a to z are:" << endl;
    // PRINT array
    for(int i = 0; i < 26; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
