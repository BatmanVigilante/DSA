#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //Subarray with given XOR using Hashing
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    //Using unordered_map to store the prefix XOR
    unordered_map<int,int> mp;
    int prefixXOR=0;
    int count=0;
    for(int i=0;i<n;i++){
        prefixXOR^=arr[i];
        //If prefixXOR is equal to x, increment count
        if(prefixXOR==x){
            count++;
        }
        //If prefixXOR^x is found in the map, increment count
        if(mp.find(prefixXOR^x)!=mp.end()){
            count+=mp[prefixXOR^x];
        }
        //Increment the count of prefixXOR in the map
        mp[prefixXOR]++;
    }
    cout<<count<<endl;
    

return 0;
}