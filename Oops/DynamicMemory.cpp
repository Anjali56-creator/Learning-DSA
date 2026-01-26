#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age,roll_numeber;
    string grade;
};
int main()
{
    student *s1=new student;
    (*s1).name="Charlie";
    (*s1).age=22;
    (*s1).roll_numeber=103;
    (*s1).grade="C";
    cout<<s1->name<<endl;
    cout<<s1->age<<endl;
    cout<<s1->roll_numeber<<endl;
    cout<<s1->grade<<endl;
    delete s1;
    return 0;

}