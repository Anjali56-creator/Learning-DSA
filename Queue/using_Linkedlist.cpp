#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class queue{
    Node* front;
    Node* rear;
    public:
    queue(){
        front=rear=NULL;
    }
    bool isEmpty(){
        return front==NULL;
    }
    void push(int x){
       if(isEmpty()){
           front=rear=new Node(x);
           rear=front;
           return;
       }
       else{
           rear->next=new Node(x);
           rear=rear->next;
       }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else{
            Node* temp=front;
            front=front->next;
            delete temp;
        }
     }
     void start(){
         if(isEmpty()){
            cout<<"Queue is empty"<<endl;
         }
         else{
            cout<<"Starting element: "<<front->data<<endl;
        }
     }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.start();
        q.pop();
        q.start();
        q.pop();
        q.start();
        q.pop();
        q.start();
        return 0;
}
