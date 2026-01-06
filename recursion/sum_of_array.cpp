#include<iostream>
using namespace std;
int sum(int arr[],int index,int n){
    if(index==n){
        return 0;
    }
    else{
        return arr[index] + sum(arr,index+1,n);
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[20];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sum(arr,0,n);
    cout<<"Sum of array elements is: "<<result<<endl;
    return 0;
}