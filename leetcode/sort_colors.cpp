class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(auto i = 0; i < nums.size()-1;i++)
        {
            int temp;
            for(auto j = i + 1; j < nums.size(); j++)
            {
                if (nums[i]>nums[j])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        for(auto n:nums)
            cout<<n;
    }
};
