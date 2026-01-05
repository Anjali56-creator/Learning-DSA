#include<iostream>
using namespace std;
void print(int arr[],int index,int n){
    if(index==n){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
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
    cout<<"Array elements are: ";
    print(arr,0,n);
    cout<<endl;
    return 0;
}