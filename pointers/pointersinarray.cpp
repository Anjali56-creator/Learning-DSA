#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr=arr; //pointer to the first element of the array
    //print the address of the first element
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    //print the value at the first element
    cout<<arr[0]<<endl;
    cout<<*ptr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*arr<<endl;
    //print the address of the second element
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<ptr+1<<endl;
    //total address of array
    for(int i=0; i<5; i++){
        cout<<arr+i<<endl;
    }
    //print the value of the array using pointer
    for(int i=0; i<5; i++){
        cout<<*(arr+i)<<endl;
    }
    //print the value of the array using pointer variable
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<endl;
    }
    //print the address of each element using pointer variable
    for(int i=0; i<5; i++){
        cout<<ptr+i<<endl;
    }
    //arithmetic on pointer
    for(int i=0; i<5; i++){
        cout<<*ptr<<endl; //print value at current pointer location
        ptr++; //move to the next integer location
    }
    for(int i=5; i>=0; i--){
        cout<<*ptr<<endl; //print value at current pointer location
        ptr--; //move back to the previous integer location
    }
    return 0;
}