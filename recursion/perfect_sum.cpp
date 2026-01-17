#include<iostream>
using namespace std;
int subset(int arr[],int index,int n,int sum){
    if(index==n){
        if(sum==0)
        return 1;
        else
        return 0;
    }
    //not include
    return subset(arr,index+1,n,sum) + subset(arr,index+1,n,sum-arr[index]);
}
int main(){
    int n,arr[20],sum;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>sum;
    cout<<subset(arr,0,n,sum);
    return 0;
}