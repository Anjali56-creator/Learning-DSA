#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int N,E;
    cout<<"Enter the number of vertices and edges: ";
    cin>>N>>E;

    vector<vector<int>> adj(N);

    for(int i=0;i<E;i++){
        int u,v;
        cout<<"Enter the edge (u v): ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    cout<<"Adjacency List:"<<endl;
    for(int i=0;i<N;i++){
        cout<<i<<": ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    // BFS
    int start;
    cout<<"Enter starting vertex for BFS: ";
    cin>>start;

    vector<int> visited(N,0);
    queue<int> Q;

    visited[start]=1;
    Q.push(start);

    cout<<"BFS Traversal: ";

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();

        cout<<u<<" ";

        for(int i=0;i<adj[u].size();i++){
            int v = adj[u][i];
            if(visited[v]==0){
                visited[v]=1;
                Q.push(v);
            }
        }
    }
    

    return 0;
}
