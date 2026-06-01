#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"Enter number of vertex and edges: ";
    cin>>vertex>>edges;
    vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
    }
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }


}