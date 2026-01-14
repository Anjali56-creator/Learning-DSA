#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[],int start,int end){
    if(start>=end)
    return;
    int pivot=partition(arr,start,end);
    //left
    quicksort(arr,start,pivot-1);
    //right
    quicksort(arr,pivot+1,end);
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[25];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}