#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<vector<int> >matrix(3,vector<int>(4,1));
    cout<<"rows= " <<matrix.size()<<endl;
    cout<<"columns= "<<matrix[0].size();

}