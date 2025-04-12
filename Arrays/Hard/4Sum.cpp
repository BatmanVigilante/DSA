#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> ans;
    sort(a,a+n);
    for(int i=0;i<n-3;i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && a[j]==a[j-1]){
                continue;
            }
            int l=j+1;
            int r=n-1;
            while(l<r){
                int sum = a[i]+a[j]+a[l]+a[r];
                if(sum==k){
                    ans.push_back({a[i],a[j],a[l],a[r]});
                    while(l<r && a[l]==a[l+1]){
                        l++;
                    }
                    while(l<r && a[r]==a[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(sum<k){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

return 0;
}