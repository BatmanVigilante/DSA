#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int x, sum = 0, ld,count=0;
    cin >> x;
    while (x > 0)
    {
        ld = x % 10;
       if(ld%2!=0) count++;
        x = x / 10;
    }
    cout << count;
    return 0;
}