#include <iostream>
using namespace std;
int main(){
    //Union of two arrays sorted in ascending order using vectors (2 Pointer approach)
    //Store in an vector and display
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    vector<int> v;
    while(i<n && j<m){
        if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            v.push_back(b[j]);
            j++;
        }
        else{
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        v.push_back(a[i]);
        i++;
    }
    while(j<m){
        v.push_back(b[j]);
        j++;
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}