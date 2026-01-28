#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    public:
    //default constructor
    customer(){
        name="Anjali";
        account_number=5;
        balance=100;
    }
    //parameterized constructor
    customer(string n, int acc_num, int bal){
        name=n;
        account_number=acc_num;
        balance=bal;
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
    return 0;
}