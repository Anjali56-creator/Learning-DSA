#include<iostream>
using namespace std;
int main(){
    char name='a';
    cout<<name<<endl;
    cout<<&name<<endl;
    char *ptr=&name;
    cout<<ptr<<endl;//prints the value
    cout<<*ptr<<endl;//prints the value at the address
    cout<<(void*)ptr<<endl; //prints the address
    return 0;
}