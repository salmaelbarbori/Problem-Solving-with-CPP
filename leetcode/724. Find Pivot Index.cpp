class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        int sum1 = 0;
        int sum2 = totalSum;
        
        for (int i = 0; i < nums.size(); ++i) {
            sum2 -= nums[i];
            
            if (sum1 == sum2) {
                return i;
            }
            
            sum1 += nums[i];
        }
        return -1;
    }
};
