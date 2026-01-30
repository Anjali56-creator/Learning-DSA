//Calculate the average of elements in an array of size 18.
#include<iostream>
using namespace std;
int main(){
    int arr[18];
    int sum=0;
    cout<<"Enter 18 elements:"<<endl;
    for(int i=0;i<18;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int average=(sum) / 18;
    cout<<"Average of 18 elements is: "<<average<<endl;
    return 0;
}