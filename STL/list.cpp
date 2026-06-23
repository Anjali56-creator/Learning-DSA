#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0);
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    //iterator
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=l.rbegin();it!=l.rend();it++){
        cout<<*it<<" ";
    }
    return 0;
}