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
    int key;
    cin>>key;
    int low = 0;
    int high = n-1;
    int mid = 0;
    int ans = -1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            ans = max(ans,mid);
            low = mid+1;
            
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        }
    if(ans == -1){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
return 0;
}