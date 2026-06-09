#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next,*prev;
  Node(int value){
    data=value;
    next=NULL;
    prev=NULL;
  }
};
class Deque{
    Node *front,*rear;
    public:
    Deque(){
        front=rear=NULL;
    }
    //push_front
    void push_front(int x){
        if(front==NULL){
          front=rear=new Node(x);
          return;
        }
        else{
          Node* temp=new Node(x);
          temp->next=front;
          front->prev=temp;
          front=temp;
          return;
        }
    }
    //push_back
    void push_back(int x){
      if(front==NULL){
          front=rear=new Node(x);
          return;
        }
        else{
          Node* temp=new Node(x);
          rear->next=temp;
          temp->prev=rear;
          rear=temp;
          return;
      }
    }
    void pop_front(){
      if(front==NULL){
        cout<<"Deque is empty"<<endl;
        return;
      }
      else{
        Node* temp=front;
        front=front->next;
        if(front!=NULL)
          front->prev=NULL;
        delete temp;
        return;
      }
    }
    int start(){
      if(front==NULL){
        cout<<"Deque is empty"<<endl;
        return -1;
      }
      else{
        return front->data;
      }

    }
    int end(){
    if(rear==NULL){
        cout<<"Deque is empty"<<endl;
        return -1;
    }
    return rear->data;
}

};
int main(){
  Deque dq;
  dq.push_back(10);
  dq.push_back(20);
  dq.push_front(5);
  cout<<"Front element: "<<dq.start()<<endl;
  cout<<"Rear element: "<<dq.end()<<endl;
  dq.pop_front();
  cout<<"Front element after pop: "<<dq.start()<<endl;
  return 0;
}