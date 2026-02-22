#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    } 
};
class teacher:public human{
   int salary;
   int age;

    public:
    teacher(string name,int salary,int age){
        this->name=name;
        this->salary=salary;
        this->age=age;
    }
    void display(){
        cout<<name<<" "<<salary<<" "<<age<<endl;
    }
};
int main(){
    teacher t("Alice",5000,30);
    t.introduce();
    t.display();
    return 0;
}