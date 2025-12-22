#include<iostream>// time complexity is o(n^2)
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT16_MIN;
    for(int i=0;i<n;i++){
        int prefix=0;
        for(int j=i;j<n;j++){
            prefix+=arr[j];
            maxi=max(maxi,prefix);
        }
    }
  cout<<maxi<<endl;
    
}