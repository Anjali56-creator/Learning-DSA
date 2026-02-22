#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    cout<<"Enter the number of vertices and edges: ";
    int N,E;
    cin>>N>>E;
    vector<vector<int>>Adj(N);
    for(int i=0;i<E;i++){
        int u,v;
        cout<<"Enter the edge (u v): ";
        cin>>u>>v;
        Adj[u].push_back(v);
        Adj[v].push_back(u);
    }
    cout<<"Enter the source vertex: ";
    int s;
    cin>>s;
    vector<int>dist(N,-1);
    queue<int>Q;
    dist[s]=0;
    Q.push(s);
    while(!Q.empty()){
        int x=Q.front();
        Q.pop();
        for(int i=0;i<Adj[x].size();i++){
            int v=Adj[x][i];
            if(dist[v]==-1){  
                dist[v]=dist[x]+1;
                Q.push(v);
            }
        }
    
    }
    for(int i=0;i<N;i++){
        cout<<"Distance from "<<s<<" to "<<i<<" is: "<<dist[i]<<endl;
    }
    return 0;
}