#include<iostream>
using namespace std;
class Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void fun(){
        a=10;
        b=20;
        c=30;
    }
};
int main(){
    Human Anjali;
    // invalid Anjali.a=10;
    // invalid Anjali.b=20;
    Anjali.c=30;
    cout<<Anjali.c<<endl;
    Anjali.fun();
    return 0;

}