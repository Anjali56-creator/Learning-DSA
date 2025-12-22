#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    //print the address of a
    cout<<ptr<<endl;
    //value at a
    cout<<*ptr<<endl;

}