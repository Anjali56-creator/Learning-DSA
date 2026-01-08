#include<iostream>
using namespace std;
int countVowels(string str,int index){
    if(index==-1)
    return 0;

    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u' ||
       str[index]=='A' || str[index]=='E' || str[index]=='I' || str[index]=='O' || str[index]=='U'){
        return 1 + countVowels(str,index-1);
    }
    else{
        return countVowels(str,index-1);
    }
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int n=str.length();

    int result=countVowels(str,n-1);
    cout<<"Number of vowels: "<<result<<endl;

    return 0;
}