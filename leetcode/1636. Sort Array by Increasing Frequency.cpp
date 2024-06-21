class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       map<int, int> freq;
        for (int n : nums) {
            freq[n]++;
        }
        vector<pair<int, int>> freq_vec(freq.begin(), freq.end());
        sort(freq_vec.begin(), freq_vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        vector<int> ans;
        for (auto& [value, count] : freq_vec) {
            for (int i = 0; i < count; ++i) {
                ans.push_back(value);
            }
        }
        return ans;
    }
};
