#include<iostream>
using namespace std;
void print(int arr[],int index,int n,int sum){
    if(index==n){
        cout<<sum<<endl;
        return;
    }
    //not include
    print(arr,index+1,n,sum);
    //include
    print(arr,index+1,n,sum+arr[index]);
}
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,0,n,0);
    return 0;
}