class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum, cnt = 0;
        for(auto i =0; i <nums.size(); ++i)
        {
            sum=0;
            for(auto j = i; j < nums.size(); ++j)
            {       
                sum += nums[j];
                if (sum %k == 0)
                    cnt++;
            }
        }
        return cnt;
    }
};
