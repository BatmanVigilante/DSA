// Selection
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 1, 4};
    int min = 0;
    for (int i = 0; i < v.size(); i++)
    {
        min = v[i];
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
                swap(v[i], v[j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}

// Bubble sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 1, 4, 5, -9};
    int min = 0;
    for (int i = 0; i < v.size(); i++)
    {
        min = v[i];
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j + 1], v[j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}

// Insertion sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 1, 4, 5, -9};
    int n = nums.size();
    // Traverse through the array
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        // Swap elements till we reach a greater element
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j - 1], nums[j]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }
}
