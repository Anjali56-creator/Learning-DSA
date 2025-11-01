#include<iostream>
using namespace std;
int main()
{
    int count0=0,count1=0,arr[100],n;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        count0++;
        else
        count1++;
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<n;i++){
        arr[i]=1;
    }
    
} 