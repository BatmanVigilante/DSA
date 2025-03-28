#include <iostream>
using namespace std;
//Kadane's Algorithm
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0,ans=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<=0){
            sum=0;
        }
        ans=max(sum,ans);
    }
    cout<<ans;
    return 0;
}