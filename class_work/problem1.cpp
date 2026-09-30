//two integer x and y we can inc x by 1 and y by 2 each operation can be performed n numbers of times.Determine the minimum number
//of operations required to make x equal to y.
#include <iostream>
using namespace std;

int main() {
    int x,y;
    int c=0;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    while(x > y){
        x++;
        y+=2;
        c++;
        if(x==y){
        cout<<c;
        break;
        }
    }
     if(x!=y){
            cout<<"-1";
        }
    return 0;
}