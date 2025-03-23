#include <iostream>
using namespace std;

int main(){
    //Second Largest Element
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest = -1;
    int secondLargest = -1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i]>secondLargest && a[i]!=largest){
            secondLargest = a[i];
        }
    }
    //if array contains single element
    if(secondLargest == -1){
        cout<<"No second largest element";
    }
    else{
        cout<<secondLargest;
    }
}