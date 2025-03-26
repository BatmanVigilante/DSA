#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={5,4,2,6};
    int n=nums.size();
    int max=INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>max){
            max=nums[i];
            ans.push_back(max);
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    return 0;
}