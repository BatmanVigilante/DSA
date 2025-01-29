#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    int count =0;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
       
    }
    cout << "Sum: " << sum << endl;
    for(int i=0;i<v.size();i++){
        if(v[i]%2!=0) count++;
    }
    cout << "Count: " << count << endl;

    vector<int> rev(v.size());
    for(int i=0;i<v.size();i++){
        rev[i]=v[v.size()-1-i];
        cout<<"Reverse: "<<rev[i]<<endl;
    }
    for(int i=1;i<=v.size();i++){
        //Sorted or not
        if(v[i-1]>v[i]){
            cout<<"Not Sorted"<<endl;
            break;
        }
        else{
            cout<<"Sorted"<<endl;
            break;
        }
    }

}