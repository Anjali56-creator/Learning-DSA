#include<iostream>
using namespace std;
class customer
{
    string name;
    int *data;

    public:
    customer()
    {
        name="Anjali";
        data=new int;
        *data=100;
        cout<<"Default constructor called"<<endl;
    }
    // destructor
    ~customer()
    {
        cout<<"Destructor called"<<endl;
    } 
};
int main()
{
    customer c1; // default constructor called
    return 0;
}