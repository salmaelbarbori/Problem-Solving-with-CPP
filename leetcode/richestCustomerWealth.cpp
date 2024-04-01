class Solution {
public:
    int sum (vector<int> v) {
        int s = 0;
        for (auto a:v)
            s+=a;
        return s;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_ = 0;
        for(auto i = 0; i < accounts.size(); i++)
        {
            max_ = max(max_, sum(accounts[i]));
        }
        return max_;
    }
};
