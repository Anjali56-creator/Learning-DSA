#include<iostream>
#include<vector>
using namespace std;
int main()
{
   //create vector,declare
   vector<int>v;
   vector<int>v1(5,1);
   //size and capacity
   cout<<"size of vector v:"<<v.size()<<endl;
   cout<<"capacity of v: "<<v.capacity()<<endl;
   v.push_back(50);
   v.push_back(78);
   v.push_back(55);
   v.push_back(30);
   cout<<"size of vector v:"<<v.size()<<endl;
   cout<<"capacity of v: "<<v.capacity()<<endl;
   cout<<"size of vector v1:"<<v.size()<<endl;
   cout<<"capacity of v1: "<<v.capacity()<<endl;
   v.push_back(50);
   v.push_back(48);
   v.push_back(95);
   v.push_back(70);
   cout<<"size of vector v:"<<v.size()<<endl;
   cout<<"capacity of v: "<<v.capacity()<<endl;
   vector<int>v3={1,8,7,6};
   
   //deleting value
   vector<int>vnew;
   vnew.push_back(5);
   vnew.push_back(51);
   vnew.push_back(7);
   vnew.push_back(9);
   vnew.push_back(10);
   cout<<"size of vnew: "<<vnew.size()<<endl;
   cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
   vnew.pop_back();
    cout<<"size of vnew: "<<vnew.size()<<endl;
   cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

   //if want to delete at specific location
   vnew.erase(vnew.begin()+1);
    cout<<"size of vnew: "<<vnew.size()<<endl;
   cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
   for(int i=0;i<vnew.size();i++)
   cout<<vnew[i]<<endl;
   

   //insert
   vnew.insert(vnew.begin()+1,44);
   for(int i=0;i<vnew.size();i++)
   cout<<vnew[i]<<endl;

   //vnew.clear();

   vector<int>arr;
   arr.push_back(55);
   arr.push_back(54);
   arr.push_back(35);
   arr.push_back(5);
   cout<<arr[0]<<endl;
   cout<<arr.front()<<endl;
   

   //copy
   vector<int>a;
   a=arr;
   for(auto i=arr.begin();i!=arr.end();i++)
   cout<<*i<<" ";



   //sort
   vector<int>ans;
   ans.push_back(88);
   ans.push_back(2);
    ans.push_back(8);
    ans.push_back(78);
    ans.push_back(85);
    //sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i];

    //dec
    //sort(ans.rbegin(),ans.rend());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i];

    //cout<<binary_search(ans.begin(),ans.end(),85)<<endl;
}