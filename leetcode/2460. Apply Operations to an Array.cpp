class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (auto i =0; i < nums.size()-1;++i)
        {
            if (nums[i] == nums[i+1])
            {
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }
        vector<int> ans;
        int cnt = 0;
        for (auto n:nums)
        {
            if(n != 0)
            {
                ans.push_back(n);
                cnt++;
            }
        }
        for (auto j = cnt; j < nums.size(); j++)
            ans.push_back(0);
        return ans;
        
    }
};
