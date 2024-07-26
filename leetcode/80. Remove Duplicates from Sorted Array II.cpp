class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(auto n:nums)
            m[n]++;
        int index = 0;
        for (auto it = m.begin(); it != m.end(); ++it) {
            int occurrences = min(it->second, 2); 
            for (int i = 0; i < occurrences; ++i) {
                nums[index++] = it->first;
            }
        }
        
        return index;
    }
};
