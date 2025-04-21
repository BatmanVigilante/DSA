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
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>=key){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        }

return 0;
}