class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        while (!nums.empty())
        {
        vector<int> v;
        for(auto i = 0; i < nums.size(); i++)
        {
            if (find(v.begin(), v.end(), nums[i]) == v.end())
            {
                v.push_back(nums[i]);
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        result.push_back(v);
    }
    return result;
        
    }
};
