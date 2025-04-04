#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> v={1,2,2,3,3,3};
    vector<int> hash={0};
    for(int i=0;i<v.size();i++){
        hash[v[i]]++;
    }
    int large=0;
    for(int i=1;i<=hash.size();i++){
        if(hash[i]>=hash[i-1]) large=i;
    }
    cout<<large;
}