#include<iostream>
using namespace std;
int sum(int arr[],int index){
    if(index==-1){
        return 0;
    }
    else{
        return arr[index]+ sum(arr,index-1);
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
    int result = sum(arr,n-1);
    cout<<"Sum of array elements is: "<<result<<endl;
    return 0;
}