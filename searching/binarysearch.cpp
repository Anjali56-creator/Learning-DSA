#include<iostream>
using namespace std;
bool binaryssearch(int arr[],int start,int end,int x){
    if(start>end)
    return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]>x)
    return binaryssearch(arr,start,mid-1,x);
    else
    return binaryssearch(arr,mid+1,end,x);
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in sorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to search: ";
    cin>>x;

    bool found=binaryssearch(arr,0,n-1,x);
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}