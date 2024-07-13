class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size(), cnt = 0;
        for (auto i =0 ; i < n; ++i)
        {
            for (auto j = 0; j < n; ++j)
            {
                if (i != j)
                {
                    if (nums[i] + nums[j] == target)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};
