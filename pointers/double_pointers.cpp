#include<iostream>
using namespace std;
int main(){
    int n=10;
    int  *p=&n; //single pointer
    int **p2=&p; //double pointer
    int ***p3=&p2; //triple pointer
    cout<<n<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;

    *p=*p+10; //single pointer dereferencing
    cout<<n<<endl;
    **p2=**p2+10;
    cout<<n<<endl;
    ***p3=***p3+10;
    cout<<n<<endl;
}