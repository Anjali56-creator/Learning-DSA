#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;

    public:
    customer(string name)
    {
        this->name=name;
        cout<<name<<endl;
    }
    ~customer()
    {
        cout<<"Destructor called for "<<name<<endl;
        
    }
};
int main(){
    customer a1("1"),a2("2"),a3("3");
    return 0;
}
