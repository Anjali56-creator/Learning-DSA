#include<iostream>
using namespace std;
bool linearsearch(int arr[],int x,int index,int n){
    if(index==n){
        return false;
    }
    if(arr[index]==x){
        return true;
    }
    return linearsearch(arr,x,index+1,n);
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to search: ";
    cin>>x;

    bool found=linearsearch(arr,x,0,n);
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}