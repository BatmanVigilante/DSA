#include <iostream>
using namespace std;

//Pascal's Traingle using vectors
//To Generate Row use this (ans*(row-col))(col)
vector<int> generateRow(int row){
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<row;i++){
        ans.push_back(ans[i-1]*(row-i)/i);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        v[i]=generateRow(i+1);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}