#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool signal = false; 
        sort(nums.begin(), nums.end());
        for (auto i = 0; i < nums.size() - 1;i++)
            if (nums[i] == nums[i+1])
                signal = true;

        return signal;
    }
};