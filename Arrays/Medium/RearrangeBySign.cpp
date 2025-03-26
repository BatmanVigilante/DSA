#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={-1,-2,3,4};
    int n=nums.size();
    vector<int> x,y;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            x.push_back(nums[i]);
        }
        else{
            y.push_back(nums[i]);
        }
    }
    vector<int> z;
    int k=0,j=0;
    for(int i=0;i<n;i++){
       if(i%2==0){
         z.push_back(x[k]);
         k++;
    }else{
        z.push_back(y[j]);
        j++;
    }

}
for(int i=0;i<n;i++){
    cout<<z[i]<<" ";
}
}