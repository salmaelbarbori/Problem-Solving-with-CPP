class Solution {
public:
    int sum(vector<int>& nums) {
        int s = 0, n;
        for(auto n:nums)
            s += n;
        return s;
    }
    
    int triangularSum(vector<int>& nums) {    
        while (nums.size() >= 2) {
            std::vector<int> newArray;
            for (size_t i = 0; i < nums.size() - 1; ++i) {
                newArray.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums = newArray;
        }
        return sum(nums);
    }
};
