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
int maxi = INT_MIN;
int pre = 1;
int suf = 1;
for(int i=0;i<n;i++){
    if(pre==0)pre =1;
    if(suf==0)suf=1;
    pre = pre*a[i];
    suf = suf*a[n-i-1];
    maxi = max(maxi,max(pre,suf));
}
cout<<maxi;

return 0;
}