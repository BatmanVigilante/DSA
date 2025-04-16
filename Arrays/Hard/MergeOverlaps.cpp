#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Merge Overlapping Intervals in single pass
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}, {17, 20}};
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end()); // Sort intervals by starting time

    int n = arr.size();
    int start = arr[0][0];
    int end = arr[0][1];

    for (int i = 1; i < n; i++)
    {
        if (arr[i][0] <= end)
        {
            end = max(end, arr[i][1]); // Merge intervals
        }
        else
        {
            ans.push_back({start, end});
            start = arr[i][0];
            end = arr[i][1];
        }
    }
    ans.push_back({start, end}); // Add the last interval

    // Print merged intervals
    for (auto interval : ans)
    {
        cout << interval[0] <<"," << interval[1] << endl;
    }
    //TC: O(nlogn) for sorting + O(n) for merging = O(nlogn)
    //SC: O(n) for storing merged intervals
    return 0;
}