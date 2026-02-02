#include<iostream>
using namespace std;
class Human{
   public:
    string name;
    int age,weight;
};
class student:protected Human{
    private:
    int roll_no,fees;
    public:
    void setData(string n,int a,int w){
        name=n; // valid: 'name' is public in 'Human'
        age=a;  // valid: 'age' is public in 'Human'
        weight=w; // valid: 'weight' is public in 'Human'
       
    }
};
int main(){
    student s1;
    //s1.name="Anjali"; // invalid: 'name' is private in 'Human'
    return 0;
}