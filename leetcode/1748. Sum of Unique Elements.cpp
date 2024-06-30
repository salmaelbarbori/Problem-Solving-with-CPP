class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> m;
        int sum = 0; 
        for (auto n:nums)
            m[n]++;
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            if (it->second == 1)
                sum += it->first;
        }
        return sum;
    }
};
