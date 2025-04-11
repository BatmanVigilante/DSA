#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Subarrays with sum k
    //Using Hashing
    unordered_map<int,int> m;
    int preSum = 0;
    int count = 0;
    m[0]=1;
    for(int i=0;i<n;i++){
        preSum+=a[i];
        if(m.find(preSum-k)!=m.end()){
            count+=m[preSum-k];
        }
        m[preSum]++;

    }
    cout<<count<<endl;
return 0;
}