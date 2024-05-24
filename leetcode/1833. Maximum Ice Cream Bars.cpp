class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int cnt = 0;
        sort(costs.begin(), costs.end());
        for(auto i = 0; i < costs.size(); ++i)
        {
            if (coins - costs[i] >= 0)
            {
                cnt++;
                coins = coins - costs[i];
            }
            else
                break;
        }
        return cnt;
    }
};
