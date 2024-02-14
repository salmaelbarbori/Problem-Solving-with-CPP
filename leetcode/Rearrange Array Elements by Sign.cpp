class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        for (auto i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        vector<int> result;
            for (auto i = 0; i < v1.size();i++)
            {
                result.push_back(v1[i]);
                result.push_back(v2[i]);
            }
        return result;
    }
};
