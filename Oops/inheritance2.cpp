#include<iostream>
using namespace std;
class Human{
    string name;
    int age,weight;
};
class student:public Human{
    int roll_no,fees;
};
int main(){
    student s1;
    //s1.name="Anjali"; // invalid: 'name' is private in 'Human'
    return 0;
}