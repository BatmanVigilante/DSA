#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool canWePlace(int arr[],int n,int mid,int c){
    int prev = arr[0];
    int cnt = 1;
    for(int i=1;i<n;i++){
        if(arr[i]-prev>=mid){
            prev = arr[i];
            cnt++;
        }
    }
    if(cnt>=c){
        return true;
    }
    return false;
}
int main(){

int n,c;
cin>>n>>c;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int low = 1;
int high = arr[n-1]-arr[0];
int ans = 0;
while(low<=high){
    int mid = (low+high)/2;
    if(canWePlace(arr,n,mid,c)){
        ans = mid;
        low = mid+1;
    }
    else{
        high = mid-1;
    }
}
cout<<ans<<endl;

return 0;
}