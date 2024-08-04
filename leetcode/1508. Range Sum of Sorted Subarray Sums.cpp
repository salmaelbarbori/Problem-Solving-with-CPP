class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        for (auto i = 0; i < nums.size(); ++i)
        {
            int sum = 0;
            for (auto j = i; j < nums.size(); ++j)
            {    
                sum += nums[j];
                v.push_back(sum);
            }
        }
        sort(v.begin(), v.end());
        int mod = 1e9 + 7;
        long long ans = 0;
        for (auto k = left - 1; k < right; ++k)
            ans = (ans + v[k])%mod;
        return ans;
    }
};
