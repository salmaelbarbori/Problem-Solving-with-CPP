class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        vector<int> ans;
        int result = 0;
        for(auto i = 0; i < satisfaction.size(); ++i)
        {
            if (satisfaction[i] > 0)
                ans.push_back(satisfaction[i]);
        }
        for(auto j = 0; j < ans.size(); ++j)
            result = result + ans[j]*(j+1);
        
        return result;
    }
};
