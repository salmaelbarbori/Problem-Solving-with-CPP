class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans = 0;

        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); ++i) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());

        sort(worker.begin(), worker.end());

        int maxProfit = 0;
        int jobIndex = 0;

        for (int ability : worker) {
            while (jobIndex < jobs.size() && jobs[jobIndex].first <= ability) {
                maxProfit = max(maxProfit, jobs[jobIndex].second);
                ++jobIndex;
            }
            ans += maxProfit;
        }

        return ans;
    }
};
