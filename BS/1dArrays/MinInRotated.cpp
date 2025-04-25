#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    int mid = 0;
    int ans = INT_MAX;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<arr[high]){
            ans = min(ans,arr[mid]);
            high = mid-1;
        }
        else{
            high = mid-1;
            if(arr[low]<=arr[mid]){
                ans = min(ans,arr[mid]);
                low = mid+1;
            }
            else{
                ans = min(ans,arr[low]);
                low = mid+1;
            }
        }
    }

    cout<<ans<<endl;
return 0;
}