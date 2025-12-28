#include<iostream>
using namespace std;

void fun(int *p){
    *p=*p+10;
}
int main(){
    int n=10;
    int  *p=&n; //single pointer
    int **p2=&p; //double pointer
    fun(p);
    cout<<*p<<" "<<endl;
  
}