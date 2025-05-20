#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPossible(int weights[], int n, int days, int capacity)
{
    int dayCount = 1;
    int currentLoad = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentLoad + weights[i] > capacity)
        {
            dayCount++;
            currentLoad = 0;
        }
        currentLoad += weights[i];
    }
    return dayCount <= days;
}

int main()
{
    int weights[] = {1, 2, 3, 4, 6, 6, 7, 8, 9, 10};
    int n = sizeof(weights) / sizeof(weights[0]);
    int days = 6;

    int low = *max_element(weights, weights + n);   // Minimum possible capacity
    int high = accumulate(weights, weights + n, 0); // Sum of all weights
    int ans = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isPossible(weights, n, days, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Minimum required capacity: " << ans << endl;
    return 0;
}