#include <iostream>
using namespace std;

int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int i,j,k;
    for(i=0;i<n-2;i++){
        if(i>0&&nums[i]==nums[i-1]){
            continue;
        }
        j=i+1;
        k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                while(j<k&&nums[j]==nums[j+1]){
                    j++;
                }
                while(j<k&&nums[k]==nums[k-1]){
                    k--;
                }
                j++;
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                k--;
                while(j<k&&nums[k]==nums[k+1]){
                    k--;
            }
            while(j<k&&nums[j]==nums[j-1]){
                j++;
            }
        }

    }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}