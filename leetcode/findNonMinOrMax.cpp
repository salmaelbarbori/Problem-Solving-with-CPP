class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());
        int m = nums[0], M = nums[nums.size()-1];
        for(auto i = 1; i<nums.size()-1; i++)
        {
            if (nums[i]!=m && nums[i] != M)
                return nums[i];
        }
        return -1;
        
    }
};
