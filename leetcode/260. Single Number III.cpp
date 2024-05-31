class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        for (auto n: nums)
            m[n]++;
        vector<int> ans;
        for (auto it = m.begin(); it != m.end(); ++it)
            if (it->second == 1)
                ans.push_back(it->first);
        return  ans;
     }
};
