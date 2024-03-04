class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(auto i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        vector<int> result;
        vector<pair<int, int>> v;
        for (auto j = m.begin(); j != m.end(); j++)
            v.push_back({j->first, j->second});

        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        int cnt = 1;
        auto it = v.begin();
        while(cnt <= k)
        {
            result.push_back(it->first);
            it++;
            cnt++;
        }
        return result;
    }
};
