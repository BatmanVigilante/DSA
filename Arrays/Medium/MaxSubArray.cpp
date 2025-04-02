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
    int start=-1,end = -1,ans_start=-1;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=a[i];
        if(sum<=0){
            sum=0;
        }
        if(sum>ans){
            ans=sum;
            ans_start=start;
            end=i;
        }
    }
    for(int i=ans_start;i<=end;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<ans;
    return 0;
}