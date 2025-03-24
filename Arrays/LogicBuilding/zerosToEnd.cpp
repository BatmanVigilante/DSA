#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0;
    while(i<n){
        if(a[i]==0){
            i++;
        }
        else{
            swap(a[i],a[j]);
            i++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}