class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int ans = 0;
        for (auto i = 0; i < customers.size(); i++)
        {
            for (auto j = 0; j < customers[i].size(); j++)
            {
                ans = max(ans, customers[i][j] - customers[i][0]);
            }
        }
        return ans;
    }
};
