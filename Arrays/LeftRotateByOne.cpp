
#include <iostream>
using namespace std;

void reverse_array(int a[],int start,int end){
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Left rotate by k places
    int k;
    cin>>k;
    k=k%n;
    reverse_array(a,0,k-1);
    reverse_array(a,k,n-1);
    reverse_array(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}