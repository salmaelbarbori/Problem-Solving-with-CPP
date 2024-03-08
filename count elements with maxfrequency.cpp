class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> m;
        for (auto i =0; i < nums.size(); i++)
            m[nums[i]]++;

        int max_= 0;
        int result = 0;
        auto it = m.begin();
        while (it != m.end())
        {
            if ( it->second > max_)
            {
                max_ = it->second;
                result = it->second;
            }
            else if (it->second == max_)
                result += it->second; 
            it++;
        }
        return result;
    }
};
