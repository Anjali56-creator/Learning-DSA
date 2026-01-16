#include<iostream>
using namespace std;
bool targetsum(int arr[],int index,int n,int target){
    if(target==0)
    return 1;
    if(index==n||target<0)
    return 0;
    //not include
    return targetsum(arr,index+1,n,target) || targetsum(arr,index+1,n,target-arr[index]);
}
int main(){
    int n,arr[20],target;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    if(targetsum(arr,0,n,target)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}