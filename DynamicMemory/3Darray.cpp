#include<iostream>
using namespace std;
int main(){
    int l,b,h;
    cout<<"Enter length, breadth and height: ";
    cin>>l>>b>>h;
    int ***ptr=new int **[l];
    //create 2D arrays for each length
    for(int i=0;i<l;i++){
        ptr[i]=new int *[b];
        for(int j=0;j<b;j++){
            ptr[i][j]=new int [h];
        }
    }
    //input values
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<h;k++){
                cin>>ptr[i][j][k];
            }
        }
    }
    //print values
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<h;k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    //deallocation of memory
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            delete [] ptr[i][j];
        }
        delete [] ptr[i];
    }
    delete [] ptr;
}