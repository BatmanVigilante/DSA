#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // Max Consecutive Ones
    int n;
    int maxi = INT_MIN;
    int count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        (a[i]==1)?count++:count=0;
        maxi=max(maxi,count);
    }
    cout << maxi;
    return 0;
}