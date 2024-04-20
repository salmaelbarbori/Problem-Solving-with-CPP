class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0;
        vector<int> temp;
        for (auto i = 0; i < heights.size(); i++)
            temp.push_back(heights[i]);
        sort(temp.begin(),temp.end());
        for(auto i = 0; i < heights.size(); i++)
            if (heights[i] != temp[i])
                cnt++;
        return cnt;      
    }
};
