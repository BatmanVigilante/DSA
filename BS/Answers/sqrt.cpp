#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int low = 1,mid = 0, high = n/2;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    while(low<=high){
        mid = low+(high-low)/2;
        if(mid*mid==n){
            cout<<mid<<endl;
            return 0;
        }
        else if(mid*mid<n){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<high<<endl;

return 0;
}