#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<string,int>p;
    //two methods of insertion
    p=make_pair("Anjali",20);
    cout<<p.first<<" "<<p.second<<endl;
    //second method
    p.first="Anju";
    p.second=99;
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}