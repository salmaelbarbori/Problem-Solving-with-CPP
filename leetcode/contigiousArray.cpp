class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if(nums.size() == 2)
        {
            if(nums[0] != nums[1])
                return 2;
        }
        unordered_map<int, int> countMap; 
        countMap[0] = -1; 
        int maxLength = 0, count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            count += (nums[i] == 1) ? 1 : -1;
            if (countMap.find(count) != countMap.end()) {
                maxLength = max(maxLength, i - countMap[count]);
            } else {
                countMap[count] = i;
            }
        }
        
        return maxLength;
    }
};
