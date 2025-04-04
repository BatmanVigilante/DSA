#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    //Transpose and reverse each row
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(a[i][j],a[i][n-j-1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}