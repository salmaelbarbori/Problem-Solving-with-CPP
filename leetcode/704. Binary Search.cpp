class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l, r, m;
        l = 0;
        r = nums.size() - 1;  

        while (l < r) {
            m = l - (l - r)/2;
            if (target == nums[m])
                return m;
            else if (target >= nums[m])
            {
                l = m + 1;
                m = l - (l - r)/2;
            }
            else 
            {
                r = m - 1;
                m = l - (l - r)/2;
            }           
        }
        return -1;
    }
};
