#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
it stores data in key value pair
it uses red black tree ar avl for implementation
insertion deletion and search operations take O(log n) time */
int main(){
    map<int,int>m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));
    m.insert(make_pair(1,100));// it won't be inserted as key 1 already exists
    m[100]=1000;// another way of insertion
    m[2]=200;// it will update the value of key 2 to 200
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
   cout<<m[200]<<endl;// it will return 0 as key 200 is not present in map
   m.erase(3);// it will erase the key 3 and its value from map
   for(auto it=m.begin();it!=m.end();it++){
       cout<<it->first<<" "<<it->second<<endl;
   }
}