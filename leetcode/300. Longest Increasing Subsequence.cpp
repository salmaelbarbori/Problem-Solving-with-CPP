class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int max_ = 0;
        int counter = 1;
        for (auto i = 0; i < nums.size() - 1; i++)
        {
            
            for (auto j = i; j < nums.size() - 1; j++)
            {
                if (nums[i] < nums[j])
                {
                    counter++;
                    if (nums[j] > nums[j + 1])
                    {
                        counter--;
                    }
                }
                
            }
            max_ = max(max_, counter);
        }
        return max_;
    }
};
