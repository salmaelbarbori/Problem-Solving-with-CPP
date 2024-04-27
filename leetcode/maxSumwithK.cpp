class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0,n = nums.size();
        while(k--)
        {
            sum += nums[n-1];
            nums[n-1] = nums[n-1]+1;
        }
        return sum;
    }
};
