#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<string> x={"abc","bcad"};
    //Longest common Prefix
    sort(x.begin(),x.end());
    string a=x[0];
    string b=x[x.size()-1];
    int minLen = min(a.size(),b.size());
    int i=0;
    for(i=0;i<minLen;i++){
        if(a[i]!=b[i]) break;
        if(i==0) cout<<"No common prefix";
        else cout<<a.substr(0,i);
    }

    return 0;
}

