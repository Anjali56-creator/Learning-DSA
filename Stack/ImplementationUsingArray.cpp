#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

public:
    Stack(int s){
        size=s;
        arr=new int[s];
        top=-1;
    }

    void push(int value){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }

        arr[++top]=value;
        cout<<"Pushed "<<value<<" into stack"<<endl;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }

        cout<<"Popped "<<arr[top--]<<" from stack"<<endl;
    }

    void peek(){
        if(top==-1)
            cout<<"Stack is empty"<<endl;
        else
            cout<<"Top element is "<<arr[top]<<endl;
    }

    bool isEmpty(){
        return top==-1;
    }

    int IsSize(){
        return top+1;
    }
};

int main(){
    Stack s(5);

    s.push(10);
    s.push(20);
    s.peek();
    cout<< s.isEmpty() <<endl;
    cout<<"Stack size is "<<s.IsSize()<<endl;

    return 0;
}