class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l, r, m;
        l = 0;
        r = nums.size() - 1;
        m = l - (l - r)/2;

        if (r < 10)
        {
           for (auto i = 0; i <= r;i++)
            if (nums[i] == target)
                return i;
           return -1;
        }    

        while (l < r) {
            if (target > nums[m])
            {
                l = m + 1;
                m = l - (l - r)/2;
            }
            else if (target < nums[m])
            {
                r = m - 1;
                m = l - (l - r)/2;
            }
            else
                return m;
        }
        return -1;
    }
};
