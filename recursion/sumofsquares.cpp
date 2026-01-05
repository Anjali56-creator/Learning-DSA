#include<iostream>
using namespace std;
int sum_of_squares(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*n + sum_of_squares(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of squares of first "<<n<<" natural numbers is "<<sum_of_squares(n)<<endl;
    return 0;
}