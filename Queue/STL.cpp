#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Starting element: "<<q.front()<<endl;
    q.pop();
    cout<<"Starting element: "<<q.front()<<endl;
    cout<<"Ending element: "<<q.back()<<endl;
    return 0;
}