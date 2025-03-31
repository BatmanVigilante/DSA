#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count = 0;
    int ele;
    for(int i=0;i<n;i++){
        if(count==0){
            ele=a[i];
        }
        if(a[i]==ele){
            count++;
        }
        else{
            count--;
        }
        
    }
    if(count>n/2){
        cout<<ele;
    }
    else{
        cout<<"No Majority Element";
    }
return 0;
}