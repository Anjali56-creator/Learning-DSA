#include<iostream>
using namespace std;
int main(){
    int a=10;
    //print the address of a
    cout<<&a<<endl;
    int *ptr=&a;
    cout<<ptr<<endl;
    float m=2.6;
    float *ptr1=&m;
    cout<<ptr1<<endl;

}