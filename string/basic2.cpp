#include<iostream>
using namespace std;
int main()
{
    string s,s1,s2;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size();
    //concation of string
    cin>>s1>>s2;
    string s3=s1+s2;
    cout<<s3;
    //escape character
    string s4="Anjali is a \"good\" girl";
    cout<<s4;
}