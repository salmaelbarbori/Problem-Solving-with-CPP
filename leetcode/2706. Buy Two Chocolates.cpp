class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int sum = 0;
        for (auto i = 0; i < prices.size()-1; i++)
        {
            sum = prices[i]+prices[i+1];
            if (sum > money)
            {
                return money;
            }
            else
                return money - sum;
        }
        return money - sum;
        
    }
};
