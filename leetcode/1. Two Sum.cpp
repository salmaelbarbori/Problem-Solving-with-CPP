class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans = 0,i, j;
        vector<int> v;
        for (i = 0; i < nums.size()-1;i++)
        {
            for (j = i + 1; j < nums.size(); j++)
                if (nums[i]+nums[j] == target)
                    return {i,j};
        }
        return {0};
    }
};
