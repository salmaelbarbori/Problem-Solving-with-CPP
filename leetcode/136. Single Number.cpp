#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 1)
            return nums[0];
        for (auto i = 0; i < nums.size(); i++)
            if (nums[i] != nums[i+1])
                return nums[i];
            else
                i++;
        return 0;
    };
};
