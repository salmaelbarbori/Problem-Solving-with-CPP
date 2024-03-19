class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(auto i = 0; i < nums.size() - 1; i++)
        {
            result.push_back(nums[i+1]);
            result.push_back(nums[i]);
            nums.erase(nums.begin()+i);
        }
        return result;
    }
};
