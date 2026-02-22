#include<iostream>
using namespace std;
#include<vector>
int main(){adj
    vector<vector<int>>vv(7,vector<int>(7,8));
    for(int i=0;i<vv.size();i++){
        for(int j=0;j<vv[i].size();j++){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}