#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    int *roi;
    public:
    //default constructor
    customer(){
        name="Anjali";
        account_number=5;
        balance=100;
        roi=new int[100];
    }
    //parameterized constructor
    customer(string n, int acc_num, int bal){
        name=n;
        account_number=acc_num;
        balance=bal;
    }
    //copy constructor
    customer(const customer &c){
        name=c.name;
        account_number=c.account_number;
        balance=c.balance;
    }
  
    void dislay(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    customer c1; //default constructor called
    c1.dislay();
    cout<<endl;
    
    customer c2("Rohan", 10, 500); //parameterized constructor called
    c2.dislay();
    customer c3=c2; //copy constructor called
    customer c4(c1); //copy constructor called
    cout<<endl;
    c3.dislay();
    cout<<endl;
    c4.dislay();
    return 0;
}