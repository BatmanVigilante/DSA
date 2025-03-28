#include <iostream>
using namespace std;

//Prefix Sum
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prefixSum[n];
    prefixSum[0]=a[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+a[i];
    }
    int sum=0,ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=prefixSum[j]-prefixSum[i-1];
            ans=max(sum,ans);
        }
    }
    cout<<ans;
    return 0;
}