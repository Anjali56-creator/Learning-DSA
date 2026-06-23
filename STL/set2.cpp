#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    int age;
    string name;
};
bool operator<(const person &p1,const person &p2){
    return p1.age<p2.age;
}
int main(){
    set<person>s;
    person p1, p2;
    p1.age=20;
    p1.name="Anjali";
    p2.age=99;
    p2.name="Anju";
    s.insert(p1);
    s.insert(p2);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<it->age<<" "<<it->name<<endl;
    }
}