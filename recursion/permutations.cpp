#include<iostream>
#include<vector>
using namespace std;
void permut(int arr[],vector<vector<int>>& ans,vector<int> &temp,vector<bool> &visited){
    if(visited.size()==temp.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
        visited[i]=1;
        temp.push_back(arr[i]);
        permut(arr,ans,temp,visited);
        visited[i]=0;
        temp.pop_back();
        }
    }
}
int main(){
    int n,arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(n,0);
    permut(arr,ans,temp,visited);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}