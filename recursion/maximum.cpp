#include<iostream>
using namespace std;
int max(int arr[],int index,int n){
    if(index==n-1){
        return arr[index];
    }
    else{
        return max(arr[index], max(arr,index+1,n));
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
    int result = max(arr,0,n);
    cout<<"Maximum element in the array is: "<<result<<endl;
    return 0;
}