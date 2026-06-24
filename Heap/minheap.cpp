#include<iostream>
using namespace std;
void Heapify(int arr[],int index,int n){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<n && arr[left]<arr[largest])
        largest=left;
    
    if(right<n && arr[right]<arr[largest])
    
        largest=right;
    
    if(largest!=index)
    {
        swap(arr[index], arr[largest]);
        Heapify(arr,largest,n);
    }
}
void buildmaxheap(int arr[],int n){
    //step down method
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int n=10;
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    buildmaxheap(arr,n);
    print(arr,n);
    return 0;
} //time complexity of insert and delete is O(n) and space complexity is O(n)