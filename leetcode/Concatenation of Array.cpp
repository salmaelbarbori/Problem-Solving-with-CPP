class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (auto i = 0; i < nums.size(); i++)
            ans.push_back(nums[i]);
        for (auto i = nums.size(); i < 2*nums.size(); i++)
            ans.push_back(nums[i - nums.size()]);
        return ans;
    }
};
