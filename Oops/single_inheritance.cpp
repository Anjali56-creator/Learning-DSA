#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;

    public:
    Human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
class student:public Human{
    private:
    int roll_no,fees;
    public:
    student(string name,int age,int roll_no,int fees): Human(name,age)
    {
        this->roll_no=roll_no;
        this->fees=fees;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl; // valid: 'name' is protected in 'Human'
        cout<<"Age: "<<age<<endl;   // valid: 'age' is protected in 'Human'
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};
int main(){
    student s1("Anjali",20,101,5000);
    s1.display();
    return 0;
}