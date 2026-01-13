#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            left++;
            index++;
        }
        else{
            temp[index]=arr[right];
            right++;
            index++;
        }
    }
    //left array remaining
    while(left<=mid){
        temp[index]=arr[left];
        left++;
        index++;
    }
    //right array remaining
    while(right<=end){
        temp[index]=arr[right];
        right++;
        index++;
    }
    //copy temp to original array
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }

}
void mergesort(int arr[],int start,int end){
    if(start>=end)
    return;
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);

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
    mergesort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}