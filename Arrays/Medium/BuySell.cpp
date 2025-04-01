#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini = a[0];
    int profit = 0;
    int cost;
    for(int i=1;i<n;i++){
        cost = a[i]-mini;
        profit=max(profit,cost);
        mini = min(mini,a[i]);
    }
    cout<<profit;
return 0;
}