#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_num,balance;
    static int total_customer;
    static int total_balance;
    public:
    customer(string n,int acc,int bal){
        name=n;
        acc_num=acc;
        balance=bal;
        total_customer++;
        total_balance += bal;
    }
void display(){
    cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<" "<<total_balance<<endl;
}
void deposit(int amt){
    if(amt>0){
    balance += amt;
    total_balance += amt;
    }
    else{
        cout<<"Invalid deposit amount"<<endl;
    }
}
    void withdraw(int amt){
        if(amt>0 && amt<=balance)
        balance -= amt;
        total_balance -= amt;
    } 
};
int customer::total_customer=0;
int customer::total_balance=0; // static member initialization
int main(){
    customer c1("Anjali",1001,5000);
    customer c2("Rohan",1002,7000);
    c1.display();
    c2.display();
    c1.deposit(-10);
    return 0;
        
}