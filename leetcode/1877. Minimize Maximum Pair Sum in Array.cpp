class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum = 0,i, j;
        sort(nums.begin(), nums.end());
        for (i = 0, j = nums.size()-1; i<j;i++,j--)
        {
            sum = max(sum,(nums[i]+nums[j]));
        }
        return sum;
    }
};
