#include<iostream>
#include<vector>
using namespace std;
//unweighted graph undirected
int main(){
    int vertex,edges;
    cout<<"Enter number of vertex and edges: ";
    cin>>vertex>>edges;
    vector<vector<int>>AdjList(vertex);
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    cout<<"Adjacency List: "<<endl;
    //printing the adjacency List
    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<" ";
        }
    }
    return 0;
}