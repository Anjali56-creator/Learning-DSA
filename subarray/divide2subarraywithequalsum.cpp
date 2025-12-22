#include<iostream>
using namespace std;
int main()
{
    int total_sum=0,n,arr[100];
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int prefix=0;
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        int ans=total_sum-prefix;
         if(ans==prefix)
        cout<<"exists";
    }
   
    return -1;
}