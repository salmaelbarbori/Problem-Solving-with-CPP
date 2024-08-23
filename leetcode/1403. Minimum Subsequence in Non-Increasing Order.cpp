class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int total=accumulate(nums.begin(), nums.end(),0LL), sub = 0, remain = total;
        vector<int> ans;
        for (auto n:nums)
        {
            sub+=n;
            remain-=n;
            ans.push_back(n);
            if(remain<sub)
                break;
        }
        return ans;
    }
};
