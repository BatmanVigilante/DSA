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
    int k;
    cin>>k;
    // unordered_map<int,int> mpp;
    // int sum = 0,maxLen=0;
    // for(int i=0;i<n;i++){
    //     sum += a[i];
    //     if(sum==k){
    //         maxLen = max(maxLen,i+1);
    //     }
    //     int rem = sum-k;
    //     if(mpp.find(rem)!=mpp.end()){
    //         int len = i- mpp[rem];
    //         maxLen = max(maxLen,len);    
    //     }
    //     if(mpp.find(sum)==mpp.end()){
    //         mpp[sum] = i;
    //     }
        
    // }
    // cout<<maxLen<<endl;

    int i=0,j=0;
    int sum = 0,maxLen=0;
    for(i=0;i<n;i++){
        while(sum<k){
            i++;
            sum+=a[i];
        }
        while(sum>k){
            sum-=a[j];
            j++;
        }

        if(sum==k){
            maxLen = max(maxLen,i-j+1);
        }

    }
    
    cout<<maxLen<<endl;

return 0;
}