class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m = 0;
        if (nums.size() == 1)
            return true;
        for (auto i = 0; i <= m; ++i)
        {
            m = max(m, nums[i]+i);
            if (m >= nums.size()-1)
                return true;
        }
        return false;
    }
};
