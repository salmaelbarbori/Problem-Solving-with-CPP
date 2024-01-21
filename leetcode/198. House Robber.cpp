class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for (auto i = 0; i < nums.size();i++)
        {
            if (i % 2 == 0)
                sum1 += nums[i];
            else
                sum2 += nums[i];
            //i++;
        }
        if (sum1>=sum2)
            return sum1;
        else
            return sum2;
    }
};
