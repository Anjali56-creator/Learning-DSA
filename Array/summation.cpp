//1: Take 20 elements from user input and find its sum with the help of an array.
#include<iostream>
using namespace std;
int main(){
    int arr[20];
    int sum=0;
    cout<<"Enter 20 elements:"<<endl;
    for(int i=0;i<20;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of 20 elements is: "<<sum<<endl;
}