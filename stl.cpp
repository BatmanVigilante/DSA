#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    // vector<int> nums = {1,2,3,4,-1};
    // sort(nums.begin(),nums.end());
    // cout<<nums[0];

    //STL - Pair
    // pair<int,string> student;
    // student.first = 1;
    // student.second = "Alice";
    // cout << "Roll No: " << student.first << ", Name: " << student.second << endl;

    //STL - Vector
    //  vector<int> nums = {1,2,3,4,5};
    //  nums.erase(nums.begin()+2);
    //  for(auto i:nums) cout<<i<<" ";

    //STL - List
    // deque<int> lt;
    // lt.push_front(2);
    // cout<<lt.front();

    multimap<int, string> mm;
    mm.insert({1, "one"});
    mm.insert({1, "uno"});
    mm.insert({2, "two"});
    mm.insert({2, "dos"});
    
    auto range = mm.equal_range(2);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << ": " << it->second << "\n";
    }
    return 0;
}

