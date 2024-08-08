class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<int, int>> v;
        for (auto i = 0;i< arr.size(); ++i)
        {
            for (auto j = i+ 1; j < arr.size(); ++j)
            {
                v.push_back({arr[i], arr[j]});
            }
        }
        
        sort(v.begin(), v.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first * b.second < a.second * b.first;
        });
        
        return {v[k-1].first, v[k-1].second};
    }
};
