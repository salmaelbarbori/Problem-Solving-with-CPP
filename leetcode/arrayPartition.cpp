class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0, i;
        for (i = 0; i<nums.size(); i = i+2)
        {
            result += nums[i];
        }

        return result;
            
    }
};
