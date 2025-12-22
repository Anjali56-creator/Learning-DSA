#include<iostream>
using namespace std;
int main()
{
    int size=0;
    string s;
    cin>>s;
    while(s[size]!='\0'){
        size++;
    }
    cout<<size<<" ";
}