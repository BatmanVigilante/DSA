#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //Longest Subarray with sum 0
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> m;
    int maxi = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(m.find(sum)!=m.end()){
                maxi=max(maxi,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}