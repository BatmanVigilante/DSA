#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    vector<int> vec={4,5,8,10};
    int k = 5;
    int n = vec.size();
    int low = 0;
    int high = n - 1;
    int missing = 0;
    while(low<=high){
        int mid = (low+high)/2;
        missing = vec[mid] - mid - 1;
        if(missing<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<(high+1+k)<<endl;

return 0;
}