#include<iostream>
using namespace std;
int pow(int num,int n){
    if(n==1||n==0)
    return num;
    else
    return num*pow(num,n-1);
}
int main(){
    int num,n;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter power: ";
    cin>>n;
    cout<<num<<" raised to the power "<<n<<" is "<<pow(num,n)<<endl;
    return 0;
}