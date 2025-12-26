#include<iostream>
using namespace std;
void swapping(int &p1,int &p2){
    int temp=p1;
    p1=p2;
    p2=temp;
}
int main(){
    int first=10;
    int second=20;
    swapping(first,second);
    cout<<"first value: "<<first<<endl;
    cout<<"second value: "<<second<<endl;
    return 0;
}