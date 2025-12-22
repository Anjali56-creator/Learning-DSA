#include<iostream>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int start=0,end=s.size()-1;
    while(start<end){
        if(s[start]!=s[end]){
            cout<<"not a palindrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"yes";
}