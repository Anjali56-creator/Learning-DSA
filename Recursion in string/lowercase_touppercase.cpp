#include<iostream>
using namespace std;
void lowertoupper(string &str,int index){
    if(index==-1)
    return;
    str[index]='A'+str[index]-'a';
    lowertoupper(str,index-1);
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int n=str.length();

    lowertoupper(str,n-1);
    cout<<"Uppercase string: "<<str<<endl;

    return 0;
}