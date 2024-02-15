class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (auto i = 0; i < nums.size() - 1; i++)
        {
            for (auto j = i+1; j < nums.size(); j++)
            {
                if (nums[i] == 0)
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                    //swap(nums[i], nums[j]);
            }
        }
        for (auto c:nums)
            cout<<c;
    }
};
