class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;
        for(auto i = 0; i < nums.size(); i++)
        {
            vector<int> temp;
            for (auto j = 0; j <= l.size(); j++)
            {
                temp.push_back(nums[l[j]]);
            }
            sort(temp.begin(),temp.end());
            for (auto k = 0; k < temp.size() - 1; k++)
            {
                if (temp[k+1] - temp[k] != temp[k+2] - temp[k-1])
                    result.push_back(false);
            }
            result.push_back(true);
        }
                                    return result;
    }
};
