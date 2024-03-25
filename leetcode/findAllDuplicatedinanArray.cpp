class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        map<int, int> m;
        for (auto i =0; i < nums.size(); i++)
            m[nums[i]]++;
        auto it = m.begin();
        while (it!= m.end())
        {
            if (it->second == 2)
                result.push_back(it->first);
            it++;
        }
        return result;
    }
};
