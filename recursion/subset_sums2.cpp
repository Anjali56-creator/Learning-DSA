#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int index,int n,int sum,vector<int>&ans){
    if(index==n){
        cout<<sum<<endl;
        ans.push_back(sum);
        return;
    }
    //not include
    print(arr,index+1,n,sum,ans);
    //include
    print(arr,index+1,n,sum+arr[index],ans);
}
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    print(arr,0,n,0,ans);
    return 0;
}