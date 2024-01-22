class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int number, missing;
        vector<int> result;
 
        int n = nums.size();
        int sum = n * (n + 1) /2, sum1= 0;
        sort(nums.begin(), nums.end());
         for (auto i = 0; i < nums.size() - 1;i++)
        {
            if (nums[i] == nums[i+1])
            {
                number = nums[i];
            }
            sum1 += nums[i];
        }
        sum1+=nums[n - 1];
        missing = sum - sum1 + number;
        result.push_back(number);
        result.push_back(missing); 
        return result;
    }
    
};
