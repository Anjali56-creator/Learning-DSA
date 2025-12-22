#include<iostream>
using namespace std;
int sum(int a,int b){
    int z=a+b;
    int u=a*b;
    int v=a/b;
    int w=a%b;
    int x=a-b;
}
int main()
{
    int a,b;
    cout<<"enter the two numbers: ";
    cin>>a>>b;
    cout<<sum(a,b);
}