#include<iostream>
using namespace std;
class maxheap{
    int *arr;
    int size;//total elements in heap
    int totalSize;
    public:
    maxheap(int n){
        arr=new int[n];
        size=0;
        totalSize=n;
    }
    //insert into heap
    void insert(int value){
        //if heap size is available or not
        if(size==totalSize)
        {
            cout<<"Heap is full"<<endl;
            return;
        }
        arr[size]=value;
        int index=size;
        size++;
        //compare it with parent
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[index], arr[(index-1)/2]);
            index=(index-1)/2;
        }
        cout<<"Element inserted: "<<arr[index]<<endl;
    }
    void print(){
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void Delete(){
        if(size==0)
        {
            cout<<"Heap is empty"<<endl;
            return;
        }
        cout<<"Element deleted: "<<arr[0]<<endl;
        arr[0]=arr[size-1];
        size--;
        if(size==0){
            cout<<"heap is empty"<<endl;
            return;
        }
        heapify(0);
    }
    //heapify
        void heapify(int index){
            int largest=index;
            int left=2*index+1;
            int right=2*index+2;
            if(left<size && arr[left]>arr[largest])
            {
                largest=left;
            }
            if(right<size && arr[right]>arr[largest])
            {
                largest=right;
            }
            if(largest!=index)
            {
                swap(arr[index], arr[largest]);
                heapify(largest);
            }
        }
};
int main(){
    maxheap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);// heap is full
    h.print();
    h.Delete();
} // time complexity of insert and delete is O(log n) and space complexity is O(n)