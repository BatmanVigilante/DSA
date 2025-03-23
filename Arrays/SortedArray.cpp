#include <iostream>
using namespace std;

int main(){
    vector<int> a = {1,2,3,5,4};
    int n = a.size();
    bool isSorted = true;
    int i=0;
    while(i<n-1){
        if(a[i]>a[i+1]){
            isSorted = false;
            break;
        }
        i++;
 }
    if(isSorted){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}