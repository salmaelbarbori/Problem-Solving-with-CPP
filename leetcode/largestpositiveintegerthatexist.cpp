class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto i : nums)
        {
            if ((find(nums.begin(), nums.end(),abs(i))!= nums.end()) && find(nums.begin(),                          nums.end(),i)!= nums.end() && abs(i) != i)
                return abs(i);
        }
        return -1;
    }
};
