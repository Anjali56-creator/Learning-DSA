#include<iostream>
#include<queue>
using namespace std;
int k;
int arr[]={1,2,3,4,5,6,7,8,9};
queue<int> q;
cout<<"Enter the window size (k):";
cin>>k;
for(int i=0;i<k;i++){
    q.push(arr[i]);
}
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
    if(i<9){
        q.push(arr[i]);
        i++;
    }
}
