class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans = 0;
        for (auto i = 0 ; i < nums.size(); i++)
        {
            ans = ans | nums[i];
        }
        return (ans);
    }
};
