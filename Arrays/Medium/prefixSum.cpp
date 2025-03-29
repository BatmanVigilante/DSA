#include <iostream>
using namespace std;

//Prefix Sum without using prefix array
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_pre = 1e9;
    int sum = 0;
    int ans = -1e9;
    for(int i=0;i<n;i++){
        sum+=a[i];
        ans = max(ans,sum);
        min_pre = min(min_pre,sum);
        ans = max(ans,sum-min_pre);
    }
    cout<<ans;
    return 0;
}