#include<iostream>
using namespace std;
int subsum(int arr[],int index,int n,int sum){
    if(sum==0)
    return 1;
    if(index==n||sum<0)
    return 0;
    subsum(arr,index,n,sum-arr[index]) + subsum(arr,index+1,n,sum);

}
int main(){
    int n,arr[20],sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;
    cout<<subsum(arr,0,n,sum);
    return 0;
}