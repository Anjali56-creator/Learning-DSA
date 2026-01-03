#include<iostream>
using namespace std;
void print(int num,int n){
    if(num==n){
        cout<< n;
        return;
    }
    cout<<num<<endl;
    print(num+1,n);
}
int main()
{
     int n;
     cin>>n;
     print(1,n);
     return 0;
}
