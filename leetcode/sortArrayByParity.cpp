class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        vector<int>result;
        for (auto c:nums)
        {
            if (c%2 == 0)
                v1.push_back(c);
            else
                v2.push_back(c);
        }
        sort (v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (auto i = 0; i < v1.size(); i++)
            result.push_back(v1[i]);
        for (auto i = 0; i < v2.size(); i++)
            result.push_back(v2[i]);
        return result;
    }
};
