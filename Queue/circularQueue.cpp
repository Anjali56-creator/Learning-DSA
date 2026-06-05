#include<iostream>
using namespace std;
class queue{
    int front,rear,size;
    int *arr;
    public:
    queue(int n){
        arr=new int[n];
        front=-1;
        rear=-1;
        size=n;
    }

bool isEmpty(){
    if(front==-1 && rear==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    return (rear+1)%size==front;
}
void push(int x){
    if(isFull()){
        cout<<"Queue is full"<<endl;
    }
    else if(isEmpty()){
        front=rear=0;
        cout<<"Inserting first element: "<<x<<endl;
        arr[rear]=x;
    }
    else{
        cout<<"Inserting element: "<<x<<endl;
        rear=(rear+1)%size;
        arr[rear]=x;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"Queue underflow"<<endl;
    }
    else {
            cout<<"Deleting element"<<endl;
            if(front==rear)
            front=rear=-1;
            else
            front=(front+1)%size;
        }
    }
    void start(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Starting element: "<<arr[front]<<endl;
        }
    }
};
int main(){
    queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    q.pop();
    q.push(4);
    q.push(5);
    //q.pop();
    q.start();
    return 0;
}
