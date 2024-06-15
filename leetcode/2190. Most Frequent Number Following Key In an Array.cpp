class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int, int> m;
        for (auto n: nums)
            m[n]++;
        int ans = 0;
        for(auto it = m.begin(); it != m.end(); ++it)
        {
            if ((it->first) >= key && (it->second) > 1)
                ans = max(ans, it->first);
        }
        return ans;
    }
};
