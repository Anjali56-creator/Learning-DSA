#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    } 
};
class employee:public person{
    protected:
    int salary;
    public:
    void monthly_salary(){
        cout<<"My monthly salary is "<<salary<<endl;
    }
};
class manager:public employee{
    public:
    string department;
    manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work(){
        cout<<"I am a manager of "<<department<<" department."<<endl;
    }
};
int main(){
    manager m("Alice",5000,"Sales");
    m.introduce();
    m.monthly_salary();
    m.work();
    return 0;
}