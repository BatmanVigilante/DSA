#include<bits/stdc++.h>
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
//Longest Consecutive Sequence
//Find the longest consecutive sequence in an array
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int longest = 0;
    // sort(a,a+n);
    // int count = 1;
    // for(int i=1;i<n;i++){
    //     if(a[i] == a[i-1]+1){
    //         count++;
    //     }
    //     else if(a[i] != a[i-1]){
    //         longest = max(longest,count);
    //         count = 1;
    //     }
    // }
    // longest = max(longest,count);
    // cout<<longest<<endl;

    //Using Hashing
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int longest = 0;
    for(int i=0;i<n;i++){
        if(s.find(a[i]-1) == s.end()){
            int count = 1;
            while(s.find(a[i]+count) != s.end()){
                count++;
            }
            longest = max(longest,count);
        }
    }
    cout<<longest<<endl;
return 0;
}