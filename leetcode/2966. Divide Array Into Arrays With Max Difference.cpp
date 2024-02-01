#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i += 3) {
            if (i + 2 < nums.size() && (nums[i + 2] - nums[i] > k || nums[i + 1] - nums[i] > k)) {
                return {};  
            }

            vector<int> currentArray;
            for (int j = i; j < i + 3; j++) {
                currentArray.push_back(nums[j]);
            }
            result.push_back(currentArray);
        }

        return result;
    }
};
