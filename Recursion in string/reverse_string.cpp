#include<iostream>
using namespace std;
void reversestring(string &str,int start,int end){
    if(start>=end)
    return;
    char c=str[start];
    str[start]=str[end];
    str[end]=c;
    reversestring(str,start+1,end-1);
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int n=str.length();

    reversestring(str,0,n-1);
    cout<<"Reversed string: "<<str<<endl;

    return 0;
}