#include<iostream>
#include<unordered_set>
using namespace std;
/*
it contains unique elements and is implemented as a hash table
search insert and removal takes O(1) time on average and O(n) in worst case
*/
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}