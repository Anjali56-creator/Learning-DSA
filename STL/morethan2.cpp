#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<string,pair<int,int>>p;
    p.first="Anjali";
    p.second.first=20;
    p.second.second=99;
   // p=make_pair("Anjali",make_pair(20,99));
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    return 0;
}