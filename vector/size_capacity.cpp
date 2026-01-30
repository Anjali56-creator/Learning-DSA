#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(20);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(30);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(40);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(50);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(60);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    return 0;
}