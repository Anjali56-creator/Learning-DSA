#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_num,balance;
    static int total_customer;
    public:
    customer(string n,int acc,int bal){
        name=n;
        acc_num=acc;
        balance=bal;
        total_customer++;
    }
};
int customer::total_customer=0; // static member initialization
int main(){
    customer c1("Anjali",1001,5000);
    customer c2("Rohan",1002,7000);
    return 0;
        
}