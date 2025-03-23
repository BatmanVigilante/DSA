#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
//     int index1=-1,index2=-1;
//    unordered_map <int,int> m;
//     for(int i=0;i<n;i++){
//         if(m.find(target-a[i])!=m.end()){
//             index1 = m[target-a[i]];
//             index2 = i;
//             break;
//         }
//         m[a[i]] = i;
//     }'
    // cout<<index1<<" "<<index2;
    sort(a,a+n);
    int l=0,r=n-1;
    while(l<r){
        if(a[l]+a[r]==target){
            cout<<l<<" "<<r;
            break;
        }
        else if(a[l]+a[r]<target){
            l++;
        }
        else{
            r--;
        }
    }
}