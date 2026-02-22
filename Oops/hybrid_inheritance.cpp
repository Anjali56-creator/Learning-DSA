#include<iostream>
using namespace std;
class student{
    public:
    void print(){
        cout<<"I am a student."<<endl;
    }
};
class male:public boy{
    public:
    void print(){
        cout<<"I am a male student."<<endl;
    }
};
class female:public girl{
    public:
    void print(){
        cout<<"I am a female student."<<endl;
    }
};

class boy:public student,public male{
    public:
    void print(){
        cout<<"I am a boy."<<endl;
    }
};
class girl:public student ,public female{
    void print(){
        cout<<"I am a girl."<<endl;
    }
    
};
int main(){
    male m;
    female f;
    m.print();
    f.print();
    return 0;
}