#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
only unique elements are stored in set.
store values in sorted order(ascending order).
insertion,deletion,searching takes 0(logn)
generally implemented using red black tree.
we can sort it in descending order also using greater<type>

*/
int main(){
  set<int ,greater<int>>s;
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(40);
  s.insert(50);
  for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;
  if(s.find(200)!=s.end())
    cout<<"Element found"<<endl;
  else
    cout<<"Element not found"<<endl;
    //count
    cout<<"Count of 20 is: "<<s.count(20)<<endl;
    //erase
    s.erase(20);
    for(auto it=s.begin();it!=s.end();it++){
      cout<<*it<<" ";
    }
    cout<<endl;
}