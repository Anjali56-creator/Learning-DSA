#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Stack{
    Node *Top;
    int size;
    public:
    Stack(){
        Top=NULL;
        size=0;
    }
    //push
    void push(int value){
        Node *temp=new Node(value);
        if(temp==NULL){
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            temp->next=Top;
            Top=temp;
            size++;
            cout<<"Pushed "<<value<<" into stack"<<endl;
        }
    }
    void pop(){
        if(Top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            Node *temp=Top;
            Top=Top->next;
            delete temp;
            cout<<"Popped element from stack"<<endl;
        }
    }
    int peek(){
        if(Top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return Top->data;
        }
    }
    bool isEmpty(){
        return Top==NULL;
    }
    int IsSize(){
        return size;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    cout<<"Top element is "<<s.peek()<<endl;
    cout<< s.isEmpty() <<endl;
    cout<<"Stack size is "<<s.IsSize()<<endl;
    s.pop();
    cout<<"Top element is "<<s.peek()<<endl;
    return 0;
}