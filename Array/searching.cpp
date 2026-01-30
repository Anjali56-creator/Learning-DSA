// Find the index of a specific element in an array, if the element is not present, print -1. 
//Ask the size of the array from the user and then implement it.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[50];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to be searched:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index:"<<i<<endl;
            break;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}