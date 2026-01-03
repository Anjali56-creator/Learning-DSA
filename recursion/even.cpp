#include<iostream>
using namespace std;

void printeven(int num,int n){
    if(num>n){
        
        return;
    }
    cout<<num<<" ";
    printeven(num+2,n);

}
int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    n--;
    printeven(2,n);
}