#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    vector<int> nums={2,3,4,5};
    int temp=0;
    for(int i=0;i<nums.size()/2;i++){
        temp=nums[i];
        nums[i]=nums[nums.size()-1-i];
        nums[nums.size()-1-i]=temp;
    }
    for(auto i:nums) cout<<i<<" ";
}