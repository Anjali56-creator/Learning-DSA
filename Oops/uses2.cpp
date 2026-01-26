#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age,roll_number;
    string grade;
    //function getter to access private member 'name'
    //function setter to set value to private member 'name'
    public:
    void setname(string n){
        name=n;
    }
    string getname(){
        return name;
    }
    void setage(int a){
        age=a;
    }
    void setrollnumber(int r){
        roll_number=r;
    }
    void setgrade(string g){
        grade=g;
    }
    int getage(){
        return age;
    }
    int getrollnumber(){
        return roll_number;
    }
    string getgrade(){
        return grade;
    } 
};
int main(){
    student s1;
    s1.setname("Bob");
    s1.setage(21);
    s1.setrollnumber(102);
    s1.setgrade("B");
    cout<<"Name: "<<s1.getname()<<endl;
    cout<<"Age: "<<s1.getage()<<endl;
    cout<<"Roll Number: "<<s1.getrollnumber()<<endl;
    cout<<"Grade: "<<s1.getgrade()<<endl;
    return 0;
}