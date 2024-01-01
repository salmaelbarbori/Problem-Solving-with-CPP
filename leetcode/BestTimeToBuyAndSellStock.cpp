#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int min_ = prices[0];
        int max_difference = 0;
        
        for (auto i = 1; i < prices.size (); i++)
        {
            if (prices[i] < min_)
                min_ = prices[i];
            else
                max_difference = max (max_difference, prices[i] - min_);
        }
        return max_difference;
    }
};
