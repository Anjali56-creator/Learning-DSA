#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>p; //max heap implementation
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(1);
    p.push(12);

    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    cout<<p.size()<<endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
 priority_queue<int,vector<int>,greater<int>>p1; //min heap
    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.push(40);
    p1.push(1);
    p1.push(12);

    cout<<p1.top()<<endl;
    p1.pop();
    cout<<p1.top()<<endl;
    cout<<p1.size()<<endl;
    while(!p1.empty()){
        cout<<p1.top()<<" ";
        p1.pop();
    }
}