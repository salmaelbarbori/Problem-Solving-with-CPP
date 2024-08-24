class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        v.push_back(nums);
        for (auto i = 0; i < n;i++)
        {
            for (auto j = 0; j < n-1;j++)
            {
                swap(nums[j], nums[j+1]);
            }
            v.push_back(nums);
        }
        return v;
    }
};
