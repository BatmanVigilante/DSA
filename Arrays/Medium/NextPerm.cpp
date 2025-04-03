#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
//Find Longest Prefix match
//Find >i 
vector<int> a = {1,2,3,4,5};
int ind = 0;
int n = a.size();
for(int i = n-2;i>=0;i--){
    if(a[i]<a[i+1]){
        ind = i;
        break;
    }
}
for(int i=n-1;i>=ind;i--){
    if(a[i]>a[ind]){
        swap(a[i],a[ind]);
        break;
    }
}
sort(a.begin()+ind+1,a.end());
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}